<%@ page import ="java.sql.*" %>
<%
    String user = request.getParameter("fname");    
    String pwd = request.getParameter("bdate");
    String fname = request.getParameter("biiid");
    String lname = request.getParameter("bname");
    String email = request.getParameter("rdate");
    Class.forName("com.mysql.jdbc.Driver");
    Connection con = DriverManager.getConnection("jdbc:mysql://localhost/hasan",
            "root", "");
    Statement st = con.createStatement();
    //ResultSet rs;
    int i = st.executeUpdate("insert into borrow(bid, brname, bname, bdate, rdate) values ('" + fname + "','" + user + "','" + lname + "','" + pwd + "','" + email + "')");
    if (i > 0) {
        //session.setAttribute("userid", user);
        response.sendRedirect("checkdc.jsp");
       // out.print("Registration Successfull!"+"<a href='index.jsp'>Go to Login</a>");
    } else {
        response.sendRedirect("index.jsp");
    }
%>