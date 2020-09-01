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
<title>Update@Book</title>
<link rel="icon" type="image/x-icon" href="favicon.png"/>
<link rel="stylesheet" type="text/css" href="reg.css" />
</head>
<body>
<div align="center">
Update Book info
</div>
<br/>

<form action="updatep.jsp" method="post">
            <center>
            <table border="1" width="30%" cellpadding="5">
                <thead>
                    <tr>
                        <th colspan="2">Enter Book Id Here</th>
                    </tr>
                </thead>
                <tbody>
                    <tr>
                        <td>Enter book Id</td>
                        <td><input type="text" name="biid"></td>
                    </tr>
                    <tr>
                    <td><input type="reset" value="Reset"></td>
                    <td><input type="submit" value="Submit"></td>
                    </tr>
                    </tbody>
                    </table>
                    </center>
                   
        </form>
        <a href="index.jsp">Home</a>
<%
    }
%>

</body>
</html>