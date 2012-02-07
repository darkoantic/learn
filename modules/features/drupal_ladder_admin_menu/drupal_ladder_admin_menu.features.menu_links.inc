<?php
/**
 * @file
 * drupal_ladder_admin_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function drupal_ladder_admin_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-learn-drupal-admin:admin/structure/docreferences
  $menu_links['menu-learn-drupal-admin:admin/structure/docreferences'] = array(
    'menu_name' => 'menu-learn-drupal-admin',
    'link_path' => 'admin/structure/docreferences',
    'router_path' => 'admin/structure/docreferences',
    'link_title' => 'References',
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
  // Exported menu link: menu-learn-drupal-admin:admin/structure/features
  $menu_links['menu-learn-drupal-admin:admin/structure/features'] = array(
    'menu_name' => 'menu-learn-drupal-admin',
    'link_path' => 'admin/structure/features',
    'router_path' => 'admin/structure/features',
    'link_title' => 'Features',
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
    'weight' => '0',
  );
  // Exported menu link: menu-learn-drupal-admin:admin/structure/ladder
  $menu_links['menu-learn-drupal-admin:admin/structure/ladder'] = array(
    'menu_name' => 'menu-learn-drupal-admin',
    'link_path' => 'admin/structure/ladder',
    'router_path' => 'admin/structure/ladder',
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
    'weight' => '-50',
  );
  // Exported menu link: menu-learn-drupal-admin:admin/structure/lessons
  $menu_links['menu-learn-drupal-admin:admin/structure/lessons'] = array(
    'menu_name' => 'menu-learn-drupal-admin',
    'link_path' => 'admin/structure/lessons',
    'router_path' => 'admin/structure/lessons',
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
    'weight' => '-49',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Features');
  t('Ladder');
  t('Lessons');
  t('References');


  return $menu_links;
}
