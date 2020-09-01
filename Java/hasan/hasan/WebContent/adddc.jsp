<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title><%=session.getAttribute("userid")%>@Adding Borrower</title>
        <link rel="icon" type="image/x-icon" href="favicon.png"/>
		<link rel="stylesheet" type="text/css" href="reg.css" />
    </head>
    <body>
        <form method="post" action="getpd.jsp">
            <center>
            <table border="1" width="50%" cellpadding="8">
                <thead>
                    <tr>
                        <th colspan="2">Enter Borrower Information Here</th>
                    </tr>
                </thead>
                <tbody>
                    <tr>
                        <td>Borrower Name</td>
                        <td><input type="text" name="fname" value="" /></td>
                    </tr>
                    <tr>
                        <td>Book Name</td>
                        <td><input type="text" name="bname" value="" /></td>
                    </tr>
                    <tr>
                        <td>Book ID</td>
                        <td><input type="text" name="biiid" value="" /></td>
                    </tr>
                    <tr>
                        <td>Borrow date</td>
                        <td><input type="text" name="bdate" value="" /></td>
                    </tr>
                    <tr>
                        <td>Return date</td>
                        <td><input type="text" name="rtdate" value="" /></td>
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