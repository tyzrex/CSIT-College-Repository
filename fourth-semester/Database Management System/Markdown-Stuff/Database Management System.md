#### Database Management System

##### Assignment 1

---

##### Question 1

What are the advantages of using DBMS over a traditional filing system?

###### Answer:

Using a database instead of a traditional filing system has several advantages and can significantly improve the way organizations manage their data.

* <u>Data Integrity and Consistency:</u> Databases are designed to enforce data integrity and consistency rules. This means that data entered into the system is accurate and consistent across the database, preventing inconsistencies or corruption. This level of accuracy may be more difficult to achieve using traditional filing cabinets. 
* <u>Data Security</u>: Databases offer a higher level of security than traditional filing cabinets. Sensitive data is protected and secured with features such as user authentication, user permissions and encryption. 
* <u>Concurrent Access:</u> With a database, multiple users can access and modify data at the same time, enabling effective collaboration and data sharing. In contrast, traditional filing cabinets are often only accessible to one user at a time, causing delays and inefficiencies. 
* <u>Data backup and recovery:</u> Databases also provide mechanisms for data backup and data loss recovery. This facilitates recovery from system failure or data corruption, reducing the risk of data loss.
* <u>Scalability</u>: As an organization grows and its data needs increase, the database can be easily scaled to accommodate that growth. In contrast, traditional archiving systems can become cumbersome and difficult to manage as data volumes increase. 
* <u>Data Retrieval</u>: Databases provide powerful query and search capabilities that make it easier and faster to retrieve specific data when needed. This saves a lot of time compared to manual searches using traditional archive systems. 
* <u>Data Analytics</u>: Using data analytics tools such as reporting and data mining, databases can provide valuable business insights, inform decision-making and drive growth. In contrast, traditional filing cabinets do not provide these capabilities. 

In conclusion, using a database provides a more flexible, secure and scalable data management solution than traditional archive systems. This can significantly improve the efficiency and accuracy of data management, enabling better decision-making and the overall success of the organization.

---

<div style="page-break-after: always; break-after: page;"></div>

###### Question 2

Who is a DBA and what are the key functions/responsibilities of a DBA?

###### Answer:

A database administrator (**DBA**) is a professional responsible for designing, implementing, maintaining, and managing an organization's database systems. The DBA's role includes ensuring the integrity, security, and performance of the database and its data, as well as ensuring that the database meets the needs of the organization and its users. DBAs must have broad technical skills, including knowledge of database software, hardware, and operating systems, as well as strong analytical and problem-solving skills.

The main functions/responsibilities of a DBA include:

1. <u>Installation and Configuration:</u>

   Installing and configuring database software can be a complex task, as the DBA must ensure that the hardware and software environment is properly set up and configured to meet the organization's needs. This includes tasks such as configuring memory, disk storage, and network connections. 

2. <u>Data Backup and Recovery:</u> 

   Data backup and recovery is an important responsibility of the DBA as data loss or corruption can have serious consequences for the organization. The DBA must establish and implement a backup and recovery strategy, such as regularly scheduling database backups and testing recovery procedures to ensure data recovery in the event of a system failure. 

3. <u>Performance Monitoring:</u> 

   Database performance monitoring is essential to ensure that the database is running smoothly and efficiently. DBAs must use a variety of tools and techniques to monitor performance, identify performance bottlenecks, and resolve performance issues. This includes tasks such as optimizing query performance and tuning database configurations.

4. <u>Security Management:</u> 

   Ensuring the security of the database and its data is a top priority for the DBA. This includes implementing security measures such as user authentication, access control and data encryption, as well as regular monitoring and auditing of databases to ensure security is maintained.

5. <u>Data Modeling and Design:</u> 

   The DBA must design and maintain the database structure and ensure that it meets the needs of the organization and its users. This includes tasks such as creating tables, defining relationships between tables, and normalizing data to eliminate duplication and improve data integrity.

6. <u>Space Management:</u> 

   As the amount of data in the database grows, the DBA must manage disk space usage to ensure that the database has sufficient storage capacity to meet the needs of the organization. This includes tasks such as regularly monitoring disk usage, archiving and cleaning data, and adding additional disk storage as needed.

7. <u>User Administration:</u> 

   The DBA is responsible for managing user accounts, providing access, and ensuring proper data protection. This includes tasks such as creating user accounts, assigning roles and permissions, and monitoring user activity to detect and prevent unauthorized access.

8. <u>Troubleshooting:</u> 

   A DBA must be able to troubleshoot and resolve technical issues that arise with the database. This includes tasks such as identifying and resolving database errors, troubleshooting database performance problems, and responding to user requests for database-related services.

---

<div style="page-break-after: always; break-after: page;"></div>

###### Question 3

What are the differences between Database Manager and Database Adminstrator?

###### Answer:

|                       Database Manager                       |                    Database Administrator                    |
| :----------------------------------------------------------: | :----------------------------------------------------------: |
| Focuses on the overall strategy and management of the database system | Focuses on the technical implementation and management of the database system |
|   Determines the database requirements for an organization   | Implements the database requirements and ensures they meet the needs of the organization |
| Works with upper management and stakeholders to determine the budget and resource allocation for the database system | Works with the technical team to manage the budget and resources for the database system |
|      Sets goals and objectives for the database system       | Ensures the goals and objectives for the database system are met |
|     May delegate tasks to a DBA or other technical staff     | Performs hands-on technical tasks related to the database system |
| Decides on the technology and tools to be used for the database system | Implements the technology and tools chosen by the database manager |
| Responsible for ensuring the database system aligns with the overall business strategy | Ensures the database system is optimized for performance, reliability, and security |
| Manages the database team, including DBAs and other technical staff | Works with the database team to resolve technical issues and implement new database technologies |
| Develops policies and procedures for the management and use of the database system | Ensures the policies and procedures for the database system are followed and updated as needed |

---

<div style="page-break-after: always; break-after: page;"></div>

###### Question 4

What is data encryption?

###### Answer:

Data encryption is the process of converting plain text data into a coded or encrypted format to prevent unauthorized access or theft. Only those with the correct decryption key or password can decrypt and read the encrypted data. Encryption is an important tool to protect sensitive data such as financial information, personal data or confidential business information. Encrypted data can be stored on a computer, transmitted over a network, or transmitted over the Internet. There are two main types of data encryption: symmetric encryption and asymmetric encryption.

* **Symmetric encryption** uses the same key for encryption and decryption. This makes symmetric encryption fast and efficient, and means that the sender and receiver of the encrypted data must share the same key. This can be a security risk, especially if the key is intercepted in transit. 

* **Asymmetric encryption**, also known as public key encryption, uses two different keys for encryption and decryption. The encryption key is publicly available, while the decryption key is kept secret. It allows users to encrypt data using a public key that can only be decrypted by the intended recipient in possession of the private key.

Encryption algorithms such as AES(Advanced Encryption Standard) and RSA(Rivest, Shamir, and Adleman named after the creators of the algorithm) are used to perform the actual data encryption and decryption. These algorithms use mathematical functions and formulas to encrypt and decrypt data, making it extremely difficult for unauthorized users to access the data.

In addition to encryption, it is also important to properly manage encryption keys and ensure secure storage of encrypted data. This may include implementing key management processes, regularly rotating encryption keys, and ensuring encrypted data is stored on secure servers or devices.

Finally, data encryption is an essential tool for protecting sensitive data and preventing unauthorized access. Using encryption, along with proper key management and secure data storage, helps keep sensitive data safe and secure.

---

<div style="page-break-after: always; break-after: page;"></div>

###### Question 5

Write the differences between DBMS and Filing system.

###### Answer:

|              Database Management System (DBMS)               |                        Filing System                         |
| :----------------------------------------------------------: | :----------------------------------------------------------: |
| A software system that allows users to interact with a database and manage its data | A manual or automated method of organizing and storing data in files and folders |
| Provides a centralized location for storing and managing data | Stores data in separate files and folders, with no central organization |
| Allows for easy retrieval of data based on specific criteria | Retrieval of data is based on the user's knowledge of the file's location and name |
| Supports multiple users and allows for concurrent access to the data | Access to data is limited to one user at a time, and concurrent access is not supported |
| Offers advanced security features, such as data encryption and user authentication | Security features are limited, and data protection may rely on physical security measures |
| Provides built-in error checking and data validation features | Error checking and data validation must be performed manually, leading to a higher risk of data errors |
|     Allows for data to be easily updated and manipulated     | Updating and manipulating data requires manual intervention and is more time-consuming |
|     Offers advanced reporting and analysis capabilities      | Reporting and analysis capabilities are limited, and custom reports may require manual creation |
|        Scalable, able to handle large amounts of data        | Limited scalability, with a limited capacity for storing data |

---

<div style="page-break-after: always; break-after: page;"></div>

###### Question 6

Why do we need a database? Discuss the drawbacks of filing system and advantages of DBMS.

###### Answer:

The need for databases stems from the ever-increasing amount of data generated and the need to store and manage this data in an organized and efficient manner. A database provides a centralized place to store and manage data, making it easy to retrieve, update, and manipulate data as needed. Disadvantages of document systems include:

- Limited scalability: File systems have a limited capacity to store data, making management and access more difficult as data grows.

- Limited data organization: In a file system, data is stored in individual files and folders without a central organization. This can make it difficult to retrieve data based on certain criteria because the user needs to know the location and name of the file.

- Limited security features: File systems rely on physical security measures to protect data and have limited security features to prevent unauthorized access. 
- Limited data validation: Error checking and data validation must be done manually, resulting in an increased risk of data errors.
- Limited reporting and analysis capabilities: Archiving systems have limited reporting and analysis capabilities, and custom reports may need to be created manually.

In contrast, a database management system (DBMS) offers several advantages, including:

- Centralized Data Management: A DBMS provides a centralized location for data storage and management, making it easy to retrieve, update, and manipulate data as needed.

- Improved data organization: A DBMS allows you to organize and store data in a structured manner, facilitating data retrieval based on specific criteria. 
- Advanced Security Features: A DBMS provides advanced security features such as data encryption and user authentication to prevent unauthorized access to data.
- Built-in Error Checking and Data Validation: A DBMS provides built-in error checking and data validation facilities that reduce the risk of data errors. 
- Advanced reporting and analysis capabilities: The DBMS provides advanced reporting and analysis capabilities that allow users to easily generate reports and analyze data.
- Scalability: A DBMS is designed to be scalable and capable of handling large volumes of data and growing data requirements. 

Finally, a database is necessary to efficiently store and manage large amounts of data in an organized and secure manner. A DBMS offers many advantages over traditional filing systems, including improved data organization, enhanced security features, built-in error checking and data validation, and advanced reporting and analysis capabilities.

---

