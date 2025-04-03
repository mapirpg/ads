const productsList = document.getElementById('productsList')
products.forEach((product, index) => {
  const productItem = document.createElement('div')
  productItem.id = 'productCard'
  productItem.onclick = () => handleProductNavigate(product.id)

  productItem.innerHTML = `
      <h3>
        ${product.name}
      </h3>
      <img src="${product.image}"/>
      <p>
        Preço: R$ ${product.price.toFixed(2).replace('.', ',')}
      </p>
  `
  productsList.appendChild(productItem)
})


const autoScrollProductsList = () => {
  const currentPosition = productsList.scrollLeft
  const scrollWidth = productsList.scrollWidth - productsList.clientWidth
  const scrollStep = scrollWidth / products.length
  const nextPosition = currentPosition + scrollStep
  productsList.scrollTo({
    left: nextPosition,
    behavior: 'smooth',
  })

  if (nextPosition >= scrollWidth) {
    productsList.scrollTo({
      left: 0,
      behavior: 'smooth',
    })
  }

  setTimeout(autoScrollProductsList, 2)
}

autoScrollProductsList()