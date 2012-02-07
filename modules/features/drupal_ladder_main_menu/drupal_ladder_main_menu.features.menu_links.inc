<?php
/**
 * @file
 * drupal_ladder_main_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function drupal_ladder_main_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-learn-drupal-main:docreferences
  $menu_links['menu-learn-drupal-main:docreferences'] = array(
    'menu_name' => 'menu-learn-drupal-main',
    'link_path' => 'docreferences',
    'router_path' => 'docreferences',
    'link_title' => 'Documentation / References',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-learn-drupal-main:ladder/about
  $menu_links['menu-learn-drupal-main:ladder/about'] = array(
    'menu_name' => 'menu-learn-drupal-main',
    'link_path' => 'ladder/about',
    'router_path' => 'ladder/about',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-learn-drupal-main:ladder/drupal
  $menu_links['menu-learn-drupal-main:ladder/drupal'] = array(
    'menu_name' => 'menu-learn-drupal-main',
    'link_path' => 'ladder/drupal',
    'router_path' => 'ladder/%',
    'link_title' => 'Ladder',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-learn-drupal-main:lessons
  $menu_links['menu-learn-drupal-main:lessons'] = array(
    'menu_name' => 'menu-learn-drupal-main',
    'link_path' => 'lessons',
    'router_path' => 'lessons',
    'link_title' => 'Lessons',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Documentation / References');
  t('Ladder');
  t('Lessons');


  return $menu_links;
}
