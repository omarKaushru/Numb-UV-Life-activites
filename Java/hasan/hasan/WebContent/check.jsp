<%@page import="java.sql.DriverManager"%>
<%@page import="java.sql.ResultSet"%>
<%@page import="java.sql.Statement"%>
<%@page import="java.sql.Connection"%>

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
<h2 align="center"><font><strong>Retrieve data from database in jsp</strong></font></h2>
<table align="center" cellpadding="5" cellspacing="5" border="1">
<tr>

</tr>
<tr bgcolor="#A52A2A">
<td><b>Name</b></td>
<td><b>Father Name</b></td>
<td><b>Mother Name</b></td>
<td><b>School</b></td>
<td><b>Board</b></td>
<td><b>GPA</b></td>
<td><b>College</b></td>
<td><b>Board</b></td>
<td><b>GPA</b></td>
<td><b>Country</b></td>
<td><b>Gender</b></td>
<td><b>Contact No</b></td>
</tr>
<%
try{ 
connection = DriverManager.getConnection(connectionUrl, userId, password);
statement=connection.createStatement();
String sql ="SELECT * FROM student_info";

resultSet = statement.executeQuery(sql);
while(resultSet.next()){
%>
<tr bgcolor="#DEB887">

		<td><%resultSet.getString("fname"); resultSet.getString("lname");  %></td>
		<td><%resultSet.getString("fathername"); %></td>
		<td><%resultSet.getString("mothername"); %></td>
		<td><%resultSet.getString("school"); %></td>
		<td><%resultSet.getString("sboard"); %></td>
		<td><%resultSet.getString("sgpa"); %></td>
		<td><%resultSet.getString("college"); %></td>
		<td><%resultSet.getString("hboard"); %></td>
		<td><%resultSet.getString("hgpa"); %></td>
		<td><%resultSet.getString("country"); %></td>
		<td><%resultSet.getString("gender"); %></td>
		<td><%resultSet.getString("contact"); %></td>

</tr>

<% 
}

} catch (Exception e) {
e.printStackTrace();
}
%>
</table>