<%@ page import ="java.sql.*" %>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
    
    <%
    if ((session.getAttribute("userid") == null) || (session.getAttribute("userid") == "")) {
%>
You are not logged in<br/>
<a href="index.jsp">Please Login</a>
<%} else {
%>
<head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title><%=session.getAttribute("userid")%>@Menu</title>
        <link rel="icon" type="image/x-icon" href="favicon.png"/>
		<link rel="stylesheet" type="text/css" href="reg.css" />
    </head>
    <body>

<div align="center">Library Manager</div>
<br/>
    <div align="center">
Welcome <%=session.getAttribute("userid")%>
</div>
<br/>
<%
    Class.forName("com.mysql.jdbc.Driver");
    Connection con = DriverManager.getConnection("jdbc:mysql://localhost/hasan", "root", "");
    Statement st = con.createStatement();
    ResultSet rs;
    rs = st.executeQuery("SELECT COUNT(*) AS count FROM users");
    if(rs.next()){
%>
<%} %>
<table border="1">
<tr>

<td>
<thead>Books Information</thead><br>
>><a href="add.jsp">Add New Book</a><br/>
>><a href="edit.jsp">Edit book Info</a><br/>
>><a href="delete.jsp">Delete a book</a><br/>
>><a href="checkp.jsp">Check All Books</a><br/>
</td>
</tr>
<br>
<tr>
<td>
<thead >Borrowers Information</thead><br>
>><a href="adddc.jsp">Borrow a book</a><br/>
>><a href="editdc.jsp">Edit Borrower's Info</a><br/>
>><a href="deletedc.jsp">Delete Borrower</a><br/>
>><a href="checkdc.jsp">Check All Borrowers</a><br/>
</td>
</tr>
</table>
<center>
<div class="footer" align="center"><a href='logout.jsp'><input type="submit" value="Log Out"/></a></p>
</center>
<%
    }
%>
</body>
</html>