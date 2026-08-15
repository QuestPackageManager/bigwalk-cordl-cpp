#pragma once
// IWYU pragma private; include "UnityEngine/SliderState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SliderState)
// Forward declare root types
namespace UnityEngine {
class SliderState;
}
// Write type traits
MARK_REF_T(::UnityEngine::SliderState*);
DEFINE_IL2CPP_CLASS(::UnityEngine::SliderState*, "UnityEngine", "SliderState");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.SliderState
class CORDL_TYPE SliderState : public ::System::Object {
public:
// Declarations
/// @brief Field dragStartPos, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_dragStartPos, put=__cordl_internal_set_dragStartPos)) float_t  dragStartPos;

/// @brief Field dragStartValue, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_dragStartValue, put=__cordl_internal_set_dragStartValue)) float_t  dragStartValue;

/// @brief Field isDragging, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_isDragging, put=__cordl_internal_set_isDragging)) bool  isDragging;

static inline ::UnityEngine::SliderState* New_ctor() ;

constexpr float_t const& __cordl_internal_get_dragStartPos() const;

constexpr float_t& __cordl_internal_get_dragStartPos() ;

constexpr float_t const& __cordl_internal_get_dragStartValue() const;

constexpr float_t& __cordl_internal_get_dragStartValue() ;

constexpr bool const& __cordl_internal_get_isDragging() const;

constexpr bool& __cordl_internal_get_isDragging() ;

constexpr void __cordl_internal_set_dragStartPos(float_t  value) ;

constexpr void __cordl_internal_set_dragStartValue(float_t  value) ;

constexpr void __cordl_internal_set_isDragging(bool  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SliderState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SliderState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SliderState(SliderState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SliderState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SliderState(SliderState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19105};

/// @brief Field dragStartPos, offset: 0x10, size: 0x4, def value: None
 float_t  ___dragStartPos;

/// @brief Field dragStartValue, offset: 0x14, size: 0x4, def value: None
 float_t  ___dragStartValue;

/// @brief Field isDragging, offset: 0x18, size: 0x1, def value: None
 bool  ___isDragging;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::SliderState, ___dragStartPos) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SliderState, ___dragStartValue) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SliderState, ___isDragging) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::SliderState) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine
