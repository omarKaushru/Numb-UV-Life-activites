<%@page import="java.sql.*"%>

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
<title>Update@Profile</title>
<link rel="icon" type="image/x-icon" href="favicon.png"/>
<link rel="stylesheet" type="text/css" href="reg.css" />
</head>
<body>
<div align="center">
<%=session.getAttribute("userid")%>'s Profile
</div>
<br/>
<%
String driverName = "com.mysql.jdbc.Driver";
String connectionUrl = "jdbc:mysql://localhost/bu_chat";
String userId = "root";
String password = "";

try {
Class.forName(driverName);
} catch (ClassNotFoundException e) {
e.printStackTrace();
}

Connection connection = null;
Statement statement = null;
ResultSet resultSet = null;
%>
<%

try{ 
connection = DriverManager.getConnection(connectionUrl, userId, password);
statement=connection.createStatement();
String sql ="SELECT * FROM users WHERE uname='" + session.getAttribute("userid") + "'";

resultSet = statement.executeQuery(sql);
while(resultSet.next()){
	
%>
<form action="updatedc.jsp" method="post">
            <center>
            <table border="1" width="30%" cellpadding="5">
                <thead>
                    <tr>
                        <th colspan="2">Update Doctor Information Here</th>
                    </tr>
                </thead>
                <tbody>
                    <tr>
                        <td>First Name</td>
                        <td><input type="text" name="fname" value="<%= resultSet.getString("firstname")%>"></td>
                    </tr>
                    <tr>
                        <td>Last Name</td>
                        <td><input type="text" name="lname" value="<%= resultSet.getString("lastname")%>" ></td>
                    </tr>
                    <tr>
                        <td>Email</td>
                        <td><input type="text" name="email" value="<%= resultSet.getString("email")%>"></td>
                        </tr>
                        <tr><td>Birth Date</td>
                        <td><input type="text" name="bday" value="<%= resultSet.getString("bday")%>" ></td>
                    </tr>
                    <tr>
                        <td>City</td>
                        <td><input type="text" name="city" value="<%= resultSet.getString("city")%>" ></td>
                    </tr>
                    <tr>
                        <td>Country</td>
                        <td><select id="country" name="country">
      <option value="aus">Australia</option>
      <option value="bd">Bangladesh</option>
      <option value="usa">USA</option>
    </select></td></tr>
                        
                       <tr> <td>Gender</td><td>
 	<input type="radio" name="gender" value="male">               Male 
	<input type="radio" name="gender" value="female">	Female 
	</td>
	</tr>
	<tr>
                        <td>Contact</td>
                        <td><input type="text" name="contact" value="<%= resultSet.getString("contact")%>" ></td>
                    </tr>
                    </tr>
                    <tr>
                        <td><input type="reset" value="Reset" /></td>
                        <td><input type="submit" value="Update" /></td>
                    </tr>
                </tbody>
            </table>
            </center>
        </form>
        <a href="index.jsp">Home</a>
<% 
	
}
} catch (Exception e) {
e.printStackTrace();
}
%>

<%
    }
%>

</body>
</html>