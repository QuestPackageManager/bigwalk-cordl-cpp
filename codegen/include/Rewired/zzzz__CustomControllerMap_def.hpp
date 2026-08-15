#pragma once
// IWYU pragma private; include "Rewired/CustomControllerMap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Rewired/zzzz__ControllerMapWithAxes_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CustomControllerMap)
namespace System {
struct Guid;
}
// Forward declare root types
namespace Rewired {
class CustomControllerMap;
}
// Write type traits
MARK_REF_T(::Rewired::CustomControllerMap*);
DEFINE_IL2CPP_CLASS(::Rewired::CustomControllerMap*, "Rewired", "CustomControllerMap");
// Dependencies Rewired.ControllerMapWithAxes
namespace Rewired {
// Is value type: false
// CS Name: Rewired.CustomControllerMap
class CORDL_TYPE CustomControllerMap : public ::Rewired::ControllerMapWithAxes {
public:
// Declarations
/// @brief Field kXbQozkNUcwlHYiSjeymGlSkFcfSA, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_kXbQozkNUcwlHYiSjeymGlSkFcfSA, put=__cordl_internal_set_kXbQozkNUcwlHYiSjeymGlSkFcfSA)) int32_t  kXbQozkNUcwlHYiSjeymGlSkFcfSA;

 __declspec(property(get=get_sourceControllerId, put=set_sourceControllerId)) int32_t  sourceControllerId;

/// @brief Method FisZnWgLzBmIanQlNmTrmiLneTceA, addr 0x1819a0530, size 0x80, virtual false, abstract: false, final false
static inline ::Rewired::CustomControllerMap* FisZnWgLzBmIanQlNmTrmiLneTceA(::System::Guid  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3) ;

static inline ::Rewired::CustomControllerMap* New_ctor() ;

static inline ::Rewired::CustomControllerMap* New_ctor(::Rewired::CustomControllerMap*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method SBVUXoCihGblXLdFpTNhFIzHxFJC, addr 0x1819a05b0, size 0x20, virtual false, abstract: false, final false
inline void SBVUXoCihGblXLdFpTNhFIzHxFJC(::System::Guid  _cordl_fixed_empty_name_whitespace, int32_t  _cordl_fixed_empty_name_whitespace_param_1, int32_t  _cordl_fixed_empty_name_whitespace_param_2, int32_t  _cordl_fixed_empty_name_whitespace_param_3) ;

constexpr int32_t const& __cordl_internal_get_kXbQozkNUcwlHYiSjeymGlSkFcfSA() const;

constexpr int32_t& __cordl_internal_get_kXbQozkNUcwlHYiSjeymGlSkFcfSA() ;

constexpr void __cordl_internal_set_kXbQozkNUcwlHYiSjeymGlSkFcfSA(int32_t  value) ;

/// @brief Method .ctor, addr 0x1819a0610, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x1819a05d0, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::Rewired::CustomControllerMap*  _cordl_fixed_empty_name_whitespace) ;

/// @brief Method get_sourceControllerId, addr 0x180310fd0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_sourceControllerId() ;

/// @brief Method set_sourceControllerId, addr 0x1803f4230, size 0x10, virtual false, abstract: false, final false
inline void set_sourceControllerId(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomControllerMap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomControllerMap", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomControllerMap(CustomControllerMap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomControllerMap", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomControllerMap(CustomControllerMap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2066};

/// @brief Field kXbQozkNUcwlHYiSjeymGlSkFcfSA, offset: 0x88, size: 0x4, def value: None
 int32_t  ___kXbQozkNUcwlHYiSjeymGlSkFcfSA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Rewired::CustomControllerMap, ___kXbQozkNUcwlHYiSjeymGlSkFcfSA) == 0x88, "Offset mismatch!");

static_assert(sizeof(::Rewired::CustomControllerMap) == 0x90, "Size mismatch!");

} // namespace end def Rewired
