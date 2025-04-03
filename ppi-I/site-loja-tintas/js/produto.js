const urlParams = new URLSearchParams(window.location.search);
const id = urlParams.get('id');
const product = products?.find((product) => product.id === id)

const productProps = ['productName', 'productPrice', 'productDescription', 'productImage']
const productInfo = document.getElementById('productInfo')


productProps.forEach((id) => {
  const key = id.replace('product', '').toLocaleLowerCase()
  const element = document.createElement(key === 'image' ? 'img' : 'div')
  element.id = id
  
  if (element) {
    productInfo.appendChild(element)

    if (key === 'image') {

      element.src = product[key]
      element.alt = product.name
    } else {
      element.innerHTML = product[key]
    }
  }
})
