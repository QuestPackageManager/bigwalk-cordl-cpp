#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplinePathRef.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineRange_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SplinePathRef)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::Splines {
class SplinePathRef_SliceRef;
}
namespace UnityEngine::Splines {
struct SplineRange;
}
// Forward declare root types
namespace UnityEngine::Splines {
class SplinePathRef;
}
namespace UnityEngine::Splines {
class SplinePathRef_SliceRef;
}
// Write type traits
MARK_REF_T(::UnityEngine::Splines::SplinePathRef*);
MARK_REF_T(::UnityEngine::Splines::SplinePathRef_SliceRef*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::SplinePathRef*, "UnityEngine.Splines", "SplinePathRef");
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::SplinePathRef_SliceRef*, "UnityEngine.Splines", "SplinePathRef/SliceRef");
// Dependencies System.Object, UnityEngine.Splines.SplineRange
namespace UnityEngine::Splines {
// Is value type: false
// CS Name: UnityEngine.Splines.SplinePathRef/SliceRef
class CORDL_TYPE SplinePathRef_SliceRef : public ::System::Object {
public:
// Declarations
/// @brief Field Index, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Index, put=__cordl_internal_set_Index)) int32_t  Index;

/// @brief Field Range, offset 0x14, size 0xc 
 __declspec(property(get=__cordl_internal_get_Range, put=__cordl_internal_set_Range)) ::UnityEngine::Splines::SplineRange  Range;

static inline ::UnityEngine::Splines::SplinePathRef_SliceRef* New_ctor(int32_t  splineIndex, ::UnityEngine::Splines::SplineRange  range) ;

constexpr int32_t const& __cordl_internal_get_Index() const;

constexpr int32_t& __cordl_internal_get_Index() ;

constexpr ::UnityEngine::Splines::SplineRange const& __cordl_internal_get_Range() const;

constexpr ::UnityEngine::Splines::SplineRange& __cordl_internal_get_Range() ;

constexpr void __cordl_internal_set_Index(int32_t  value) ;

constexpr void __cordl_internal_set_Range(::UnityEngine::Splines::SplineRange  value) ;

/// @brief Method .ctor, addr 0x18217b710, size 0x20, virtual false, abstract: false, final false
inline void _ctor(int32_t  splineIndex, ::UnityEngine::Splines::SplineRange  range) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplinePathRef_SliceRef() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplinePathRef_SliceRef", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SplinePathRef_SliceRef(SplinePathRef_SliceRef && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplinePathRef_SliceRef", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplinePathRef_SliceRef(SplinePathRef_SliceRef const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18752};

/// @brief Field Index, offset: 0x10, size: 0x4, def value: None
 int32_t  ___Index;

/// @brief Field Range, offset: 0x14, size: 0xc, def value: None
 ::UnityEngine::Splines::SplineRange  ___Range;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::SplinePathRef_SliceRef, ___Index) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplinePathRef_SliceRef, ___Range) == 0x14, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::SplinePathRef_SliceRef) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Splines
// Dependencies System.Object, UnityEngine.Splines.SplinePathRef::SliceRef
namespace UnityEngine::Splines {
// Is value type: false
// CS Name: UnityEngine.Splines.SplinePathRef
class CORDL_TYPE SplinePathRef : public ::System::Object {
public:
// Declarations
using SliceRef = ::UnityEngine::Splines::SplinePathRef_SliceRef;

/// @brief Field Splines, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Splines, put=__cordl_internal_set_Splines)) ::ArrayW<::UnityEngine::Splines::SplinePathRef_SliceRef*>  Splines;

static inline ::UnityEngine::Splines::SplinePathRef* New_ctor() ;

static inline ::UnityEngine::Splines::SplinePathRef* New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplinePathRef_SliceRef*>*  slices) ;

constexpr ::ArrayW<::UnityEngine::Splines::SplinePathRef_SliceRef*> const& __cordl_internal_get_Splines() const;

constexpr ::ArrayW<::UnityEngine::Splines::SplinePathRef_SliceRef*>& __cordl_internal_get_Splines() ;

constexpr void __cordl_internal_set_Splines(::ArrayW<::UnityEngine::Splines::SplinePathRef_SliceRef*>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x18217c9c0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplinePathRef_SliceRef*>*  slices) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SplinePathRef() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SplinePathRef", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SplinePathRef(SplinePathRef && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SplinePathRef", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SplinePathRef(SplinePathRef const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18753};

/// @brief Field Splines, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Splines::SplinePathRef_SliceRef*>  ___Splines;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::SplinePathRef, ___Splines) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::SplinePathRef) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Splines
