<?php
/**
 * @file
 * nnmx_content_types.features.inc
 */

/**
 * Implements hook_node_info().
 */
function nnmx_content_types_node_info() {
  $items = array(
    'ed_digital' => array(
      'name' => t('ed_digital'),
      'base' => 'node_content',
      'description' => t('Tipo de contenido para publicar las ediciones impresas(pdf\'s)'),
      'has_title' => '1',
      'title_label' => t('Nombre de la sección'),
      'help' => '',
    ),
    'nota' => array(
      'name' => t('Nota'),
      'base' => 'node_content',
      'description' => t('Nota genérica, puede ser una crónica, una columna, una entrevista, una nota periodística, un reportaje o una presentación. Este tipo de contenido aparece de manera automática en la página inicial y se permite hacer comentarios.'),
      'has_title' => '1',
      'title_label' => t('Titulo'),
      'help' => '',
    ),
    'video' => array(
      'name' => t('Video'),
      'base' => 'node_content',
      'description' => t('publicacion de videos del portal www.noticiasnet.mx'),
      'has_title' => '1',
      'title_label' => t('Titulo'),
      'help' => '',
    ),
  );
  return $items;
}
