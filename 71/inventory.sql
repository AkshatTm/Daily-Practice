CREATE TABLE Inventory (
    ItemID INT PRIMARY KEY AUTO_INCREMENT,
    ItemName VARCHAR(100) NOT NULL,
    Cost DECIMAL(10,2) NOT NULL,
    Quantity INT NOT NULL
);

INSERT INTO Inventory (ItemName, Cost, Quantity) VALUES
('Laptop', 75000.00, 10),
('Mouse', 1200.50, 25),
('Keyboard', 2500.75, 15),
('Monitor', 15000.00, 8),
('Headphones', 3500.25, 20),
('USB Drive', 800.99, 30),
('Smartphone', 55000.00, 5),
('Tablet', 30000.00, 7),
('Charger', 1500.50, 18),
('Speaker', 5000.00, 12);

SELECT * FROM Inventory;
