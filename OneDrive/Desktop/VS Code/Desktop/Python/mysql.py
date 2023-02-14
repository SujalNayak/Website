import mysql.connector

def insertemployeewithdept():
    myDb = mysql.connector.connect(host = "localhost", user = "root", password = "root", database = "cw1")
    insertSQL = "INSERT into employee(name, email)values(%s,%s)"
    values = ["raja", "raja@gmail.com"]
    cursor = myDb.cursor()
    cursor.execute(insertSQL, values)
    myDb.commit()
    myDb.close()