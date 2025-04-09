const products = [
  {id: '1', name: 'Tinta Acrílica', price: 50.00, description: 'Tinta acrílica de alta qualidade, ideal para artesanato e pintura em geral.', image: 'https://i.pravatar.cc/150?img=1'},
  {id: '2', name: 'Tinta Esmalte', price: 70.00, description: 'Tinta esmalte para acabamento em superfícies metálicas e madeira.', image: 'https://i.pravatar.cc/150?img=2'},
  {id: '3', name: 'Tinta Spray', price: 30.00, description: 'Tinta spray para aplicação rápida e uniforme em diversas superfícies.', image: 'https://i.pravatar.cc/150?img=3'},
  {id: '4', name: 'Tinta à Base de Água', price: 40.00, description: 'Tinta à base de água, fácil de limpar e com baixo odor.', image: 'https://i.pravatar.cc/150?img=4'},
  {id: '5', name: 'Tinta à Base de Óleo', price: 60.00, description: 'Tinta à base de óleo, ideal para superfícies externas e internas.', image: 'https://i.pravatar.cc/150?img=5'},
  {id: '6', name: 'Tinta para Madeira', price: 80.00, description: 'Tinta específica para madeira, com proteção contra umidade e fungos.', image: 'https://i.pravatar.cc/150?img=6'},
  {id: '7', name: 'Tinta para Metal', price: 90.00, description: 'Tinta para metal, resistente à corrosão e com acabamento brilhante.', image: 'https://i.pravatar.cc/150?img=7'},
  {id: '8', name: 'Tinta para Parede', price: 100.00, description: 'Tinta para parede, disponível em diversas cores e acabamentos.', image: 'https://i.pravatar.cc/150?img=8'},
  {id: '9', name: 'Tinta para Tecido', price: 110.00, description: 'Tinta para tecido, ideal para personalização de roupas e acessórios.', image: 'https://i.pravatar.cc/150?img=9'},
  {id: '10', name: 'Tinta para Cerâmica', price: 120.00, description: 'Tinta para cerâmica, resistente a altas temperaturas e lavável.', image: 'https://i.pravatar.cc/150?img=10'},
  {id: '11', name: 'Tinta para Plástico', price: 130.00, description: 'Tinta para plástico, com aderência e durabilidade em superfícies plásticas.'},
  {id: '12', name: 'Tinta para Vidro', price: 140.00, description: 'Tinta para vidro, ideal para personalização de objetos de vidro e janelas.', image: 'https://i.pravatar.cc/150?img=11'},
  {id: '13', name: 'Tinta para Gesso', price: 150.00, description: 'Tinta para gesso, com acabamento fosco e fácil aplicação.', image: 'https://i.pravatar.cc/150?img=12'},
]

const handleProductNavigate = (id) => {
  window.location.href = `produto.html?id=${id}`
}