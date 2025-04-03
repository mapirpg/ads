async function loadComponent(componentPath, targetElementId) {
  try {
    const component = await fetch(componentPath)
    const componentText = await component.text(); 
    document.getElementById(targetElementId).innerHTML = componentText;
  } catch (error) {
    console.error('Erro ao carregar o componente:', error);
  }
}

document.addEventListener('DOMContentLoaded', () => {
  loadComponent('components/header.html', 'header-component');
  loadComponent('components/footer.html', 'footer-component');
});
