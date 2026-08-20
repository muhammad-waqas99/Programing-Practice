interface Product {
  readonly id: number;
  productName: string;
  price: number;
  category: Category;
}

type Category = "electronics" | "clothing" | "food";

interface Customer {
  name: string;
  email: string;
}

interface Shipping {
  address: string;
  city: string;
}

type Order = Product & Customer & Shipping;

const order: Order = {
  id: 1,
  productName: "Blender",
  price: 299,
  category: "electronics",
  name: "Waqas",
  email: "waqas@gmail.com",
  address: "Defence",
  city: "Karachi",
};

function printOrder(order: Order): void {
  console.log(
    `Your order was placed successfully.
        
Order Details:
Product: ${order.productName}
Price: ${order.price}
Category: ${order.category}
Customer: ${order.name}
Email: ${order.email}
Delivery Address: ${order.address}, ${order.city}`,
  );
}

printOrder(order);
