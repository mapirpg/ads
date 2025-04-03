const productsList = document.getElementById('products')

products.forEach((product, index) => {
  productsList.innerHTML += `
    <div 
      id="productCard" 
      style="width: 50%"
      onclick="handleProductNavigate('${product.id}')"
    >
      <h3>${product.name}</h3>
      <img src="https://i.pravatar.cc/150?img=${index + 1}"/>
      <p>Preço: R$ ${product.price.toFixed(2).replace('.', ',')}</p>
    </div>
  `
})