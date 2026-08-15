#pragma once
// IWYU pragma private; include "Rewired/ControllerTemplateActionButtonMap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__ControllerTemplateActionElementMap_def.hpp"
#include "Rewired/zzzz__Pole_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ControllerTemplateActionButtonMap)
namespace Rewired::Utils::Classes::Data {
class SerializedObject;
}
namespace Rewired {
class ActionElementMap;
}
namespace Rewired {
class IControllerElementTarget;
}
namespace Rewired {
class IControllerTemplateElementSource;
}
namespace Rewired {
struct Pole;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Rewired {
class ControllerTemplateActionButtonMap;
}
// Write type traits
MARK_REF_T(::Rewired::ControllerTemplateActionButtonMap*);
DEFINE_IL2CPP_CLASS(::Rewired::ControllerTemplateActionButtonMap*, "Rewired", "ControllerTemplateActionButtonMap");
// Dependencies Rewired.ControllerTemplateActionElementMap, Rewired.Pole
namespace Rewired {
// Is value type: false
// CS Name: Rewired.ControllerTemplateActionButtonMap
class CORDL_TYPE ControllerTemplateActionButtonMap : public ::Rewired::ControllerTemplateActionElementMap {
public:
// Declarations
/// @brief Field NbVfpPpypTnzwVRXQAkqBWxrrfxh, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_NbVfpPpypTnzwVRXQAkqBWxrrfxh, put=__cordl_internal_set_NbVfpPpypTnzwVRXQAkqBWxrrfxh)) ::Rewired::Pole  NbVfpPpypTnzwVRXQAkqBWxrrfxh;

 __declspec(property(get=get_axisContribution)) ::Rewired::Pole  axisContribution;

/// @brief Method AuDwuqdugfENXwuHJpZKBxeTaYAi, addr 0x181916b50, size 0xa0, virtual true, abstract: false, final false
inline void AuDwuqdugfENXwuHJpZKBxeTaYAi(::Rewired::Utils::Classes::Data::SerializedObject*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method BxUNCSPaKUYbRqgPmiQnZcRPAdTiA, addr 0x181916bf0, size 0x10, virtual true, abstract: false, final false
inline void BxUNCSPaKUYbRqgPmiQnZcRPAdTiA() ;

static inline ::Rewired::ControllerTemplateActionButtonMap* New_ctor(::Rewired::Utils::Classes::Data::SerializedObject*  _cordl_fixed_empty_name_whitespace) ;

static inline ::Rewired::ControllerTemplateActionButtonMap* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace_param_1) ;

static inline ::Rewired::ControllerTemplateActionButtonMap* New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method YkLyyBJbHqucsWnZPkEvLmapPQeO, addr 0x181916c00, size 0x110, virtual false, abstract: false, final false
inline ::Rewired::ActionElementMap* YkLyyBJbHqucsWnZPkEvLmapPQeO(::Rewired::IControllerElementTarget*  _cordl_fixed_empty_name_whitespace, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_1) ;

constexpr ::Rewired::Pole const& __cordl_internal_get_NbVfpPpypTnzwVRXQAkqBWxrrfxh() const;

constexpr ::Rewired::Pole& __cordl_internal_get_NbVfpPpypTnzwVRXQAkqBWxrrfxh() ;

constexpr void __cordl_internal_set_NbVfpPpypTnzwVRXQAkqBWxrrfxh(::Rewired::Pole  value) ;

/// @brief Method .ctor, addr 0x181916d10, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::Rewired::Utils::Classes::Data::SerializedObject*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method .ctor, addr 0x181916dd0, size 0x70, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::ActionElementMap*  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x181916d70, size 0x60, virtual false, abstract: false, final false
inline void _ctor(int32_t  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, ::Rewired::Pole  _cordl_fixed_empty_name_whitespace_param_2, bool  _cordl_fixed_empty_name_whitespace_param_3) ;

/// @brief Method eqhdqESTWIYKzfabigVCOYkQabjx, addr 0x181916e40, size 0xe0, virtual true, abstract: false, final false
inline int32_t eqhdqESTWIYKzfabigVCOYkQabjx(::Rewired::IControllerTemplateElementSource*  _cordl_fixed_empty_name_whitespace, ::System::Collections::Generic::List_1<::Rewired::ActionElementMap*>*  _cordl_fixed_empty_name_whitespace_param_1, bool  _cordl_fixed_empty_name_whitespace_param_2) ;

/// @brief Method get_axisContribution, addr 0x1803914a0, size 0x10, virtual false, abstract: false, final false
inline ::Rewired::Pole get_axisContribution() ;

/// @brief Method tnIvsUKVdXZbxlmmTvRafwcudBCi, addr 0x181916f20, size 0xd0, virtual true, abstract: false, final false
inline void tnIvsUKVdXZbxlmmTvRafwcudBCi(::Rewired::Utils::Classes::Data::SerializedObject*  _cordl_fixed_empty_name_whitespace) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerTemplateActionButtonMap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerTemplateActionButtonMap", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerTemplateActionButtonMap(ControllerTemplateActionButtonMap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerTemplateActionButtonMap", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerTemplateActionButtonMap(ControllerTemplateActionButtonMap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1870};

/// @brief Field NbVfpPpypTnzwVRXQAkqBWxrrfxh, offset: 0x24, size: 0x4, def value: None
 ::Rewired::Pole  ___NbVfpPpypTnzwVRXQAkqBWxrrfxh;

/// @brief Size padding 0x30 - 0x28 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::ControllerTemplateActionButtonMap, ___NbVfpPpypTnzwVRXQAkqBWxrrfxh) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Rewired::ControllerTemplateActionButtonMap) == 0x30, "Size mismatch!");

} // namespace end def Rewired
