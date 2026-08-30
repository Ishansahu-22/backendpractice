import mysql.connector as db
a = db.connect(
    host ='localhost', user ='root' , passwd = ''
)

b = a.cursor()

b.execute('USE newpracticedb')





b.execute('DESCRIBE stuname')
print(b.fetchall())


print("database created NEWPRACTICEDB")

a.close()