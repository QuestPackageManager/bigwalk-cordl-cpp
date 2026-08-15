#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEBlanket.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Boxophobic/StyledGUI/zzzz__StyledMonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TVEBlanket)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TheVisualEngine {
class TVEBalnketBlending;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace TheVisualEngine {
class TVEBlanket;
}
// Write type traits
MARK_REF_T(::TheVisualEngine::TVEBlanket*);
DEFINE_IL2CPP_CLASS(::TheVisualEngine::TVEBlanket*, "TheVisualEngine", "TVEBlanket");
// Dependencies Boxophobic.StyledGUI.StyledMonoBehaviour
namespace TheVisualEngine {
// Is value type: false
// CS Name: TheVisualEngine.TVEBlanket
class CORDL_TYPE TVEBlanket : public ::Boxophobic::StyledGUI::StyledMonoBehaviour {
public:
// Declarations
/// @brief Field blanketBlending, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_blanketBlending, put=__cordl_internal_set_blanketBlending)) ::TheVisualEngine::TVEBalnketBlending*  blanketBlending;

/// @brief Field prefabRenderers, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_prefabRenderers, put=__cordl_internal_set_prefabRenderers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  prefabRenderers;

/// @brief Method GetPrefabRenderers, addr 0x1804a7670, size 0x160, virtual false, abstract: false, final false
inline void GetPrefabRenderers() ;

static inline ::TheVisualEngine::TVEBlanket* New_ctor() ;

/// @brief Method OnEnable, addr 0x1804a77d0, size 0x1b0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method UpdatePrefabBlending, addr 0x1804a7980, size 0x260, virtual false, abstract: false, final false
inline void UpdatePrefabBlending() ;

constexpr ::TheVisualEngine::TVEBalnketBlending* const& __cordl_internal_get_blanketBlending() const;

constexpr ::TheVisualEngine::TVEBalnketBlending*& __cordl_internal_get_blanketBlending() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& __cordl_internal_get_prefabRenderers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& __cordl_internal_get_prefabRenderers() ;

constexpr void __cordl_internal_set_blanketBlending(::TheVisualEngine::TVEBalnketBlending*  value) ;

constexpr void __cordl_internal_set_prefabRenderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value) ;

/// @brief Method .ctor, addr 0x1804a7be0, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TVEBlanket() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TVEBlanket", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TVEBlanket(TVEBlanket && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TVEBlanket", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TVEBlanket(TVEBlanket const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19572};

/// @brief Field blanketBlending, offset: 0x20, size: 0x8, def value: None
 ::TheVisualEngine::TVEBalnketBlending*  ___blanketBlending;

/// @brief Field prefabRenderers, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  ___prefabRenderers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::TheVisualEngine::TVEBlanket, ___blanketBlending) == 0x20, "Offset mismatch!");

static_assert(offsetof(::TheVisualEngine::TVEBlanket, ___prefabRenderers) == 0x28, "Offset mismatch!");

static_assert(sizeof(::TheVisualEngine::TVEBlanket) == 0x30, "Size mismatch!");

} // namespace end def TheVisualEngine
