<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title><%=session.getAttribute("userid")%>@Adding book</title>
        <link rel="icon" type="image/x-icon" href="favicon.png"/>
		<link rel="stylesheet" type="text/css" href="reg.css" />
    </head>
    <body>
    <h1>Add a Book</h1>
        <form method="post" action="getp.jsp">
            <center>
            <table border="1" width="50%" cellpadding="8">
                <thead>
                    <tr>
                        <th colspan="2">Enter Information Here</th>
                    </tr>
                </thead>
                <tbody>
                    <tr>
                        <td>Book Name</td>
                        <td><input type="text" name="fname" value="" /></td>
                    </tr>
                    <tr>
                        <td>Author</td>
                        <td><input type="text" name="lname" value="" /></td>
                    </tr>
                    <tr>
                        <td>Quantity</td>
                        <td><input type="text" name="qnty" value="" /></td>
                    </tr>
                    <tr>
                        <td>Shelf no:</td>
                        <td><input type="text" name="sname" value="" /></td>
                    </tr>
                    <tr>
                        <td><input type="submit" value="Submit" /></td>
                        <td><input type="reset" value="Reset" /></td>
                    </tr>
                </tbody>
            </table>
            </center>
        </form>
        <a href="success.jsp">Go Back</a>
    </body>
</html>