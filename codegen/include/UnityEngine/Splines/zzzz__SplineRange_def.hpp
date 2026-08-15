#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineRange.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Splines/zzzz__SliceDirection_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SplineRange)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::Splines {
struct SliceDirection;
}
namespace UnityEngine::Splines {
struct SplineRange_SplineRangeEnumerator;
}
// Forward declare root types
namespace UnityEngine::Splines {
struct SplineRange;
}
namespace UnityEngine::Splines {
struct SplineRange_SplineRangeEnumerator;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Splines::SplineRange);
MARK_VAL_T(::UnityEngine::Splines::SplineRange_SplineRangeEnumerator);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::SplineRange, "UnityEngine.Splines", "SplineRange");
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::SplineRange_SplineRangeEnumerator, "UnityEngine.Splines", "SplineRange/SplineRangeEnumerator");
// Dependencies 
namespace UnityEngine::Splines {
// Is value type: true
// CS Name: UnityEngine.Splines.SplineRange/SplineRangeEnumerator
struct CORDL_TYPE SplineRange_SplineRangeEnumerator {
public:
// Declarations
 __declspec(property(get=get_Current)) int32_t  Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<int32_t>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<int32_t>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() ;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method MoveNext, addr 0x18217ca00, size 0x20, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief Method Reset, addr 0x18217ca20, size 0x20, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x18217ca40, size 0x40, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method .ctor, addr 0x18217ca80, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Splines::SplineRange  range) ;

/// @brief Method get_Current, addr 0x18217cb00, size 0x20, virtual true, abstract: false, final true
inline int32_t get_Current() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<int32_t>"
constexpr ::System::Collections::Generic::IEnumerator_1<int32_t>* i___System__Collections__Generic__IEnumerator_1_int32_t_() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr SplineRange_SplineRangeEnumerator() ;

// Ctor Parameters [CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Start", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_End", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Reverse", ty: "bool", modifiers: "", def_value: None }]
constexpr SplineRange_SplineRangeEnumerator(int32_t  m_Index, int32_t  m_Start, int32_t  m_End, int32_t  m_Count, bool  m_Reverse) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18758};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field m_Index, offset: 0x0, size: 0x4, def value: None
 int32_t  m_Index;

/// @brief Field m_Start, offset: 0x4, size: 0x4, def value: None
 int32_t  m_Start;

/// @brief Field m_End, offset: 0x8, size: 0x4, def value: None
 int32_t  m_End;

/// @brief Field m_Count, offset: 0xc, size: 0x4, def value: None
 int32_t  m_Count;

/// @brief Field m_Reverse, offset: 0x10, size: 0x1, def value: None
 bool  m_Reverse;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::SplineRange_SplineRangeEnumerator, m_Index) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineRange_SplineRangeEnumerator, m_Start) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineRange_SplineRangeEnumerator, m_End) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineRange_SplineRangeEnumerator, m_Count) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineRange_SplineRangeEnumerator, m_Reverse) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::SplineRange_SplineRangeEnumerator) == 0x14, "Size mismatch!");

} // namespace end def UnityEngine::Splines
// Dependencies UnityEngine.Splines.SliceDirection
namespace UnityEngine::Splines {
// Is value type: true
// CS Name: UnityEngine.Splines.SplineRange
struct CORDL_TYPE SplineRange {
public:
// Declarations
using SplineRangeEnumerator = ::UnityEngine::Splines::SplineRange_SplineRangeEnumerator;

 __declspec(property(get=get_Count, put=set_Count)) int32_t  Count;

 __declspec(property(get=get_Direction, put=set_Direction)) ::UnityEngine::Splines::SliceDirection  Direction;

 __declspec(property(get=get_End)) int32_t  End;

 __declspec(property(get=get_Item)) int32_t  Item[];

 __declspec(property(get=get_Start, put=set_Start)) int32_t  Start;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<int32_t>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Method GetEnumerator, addr 0x18217cb20, size 0xa0, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<int32_t>* GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x18217cbc0, size 0x20, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method ToString, addr 0x18217cbe0, size 0x80, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x18217cc60, size 0x30, virtual false, abstract: false, final false
inline void _ctor(int32_t  start, int32_t  count) ;

/// @brief Method .ctor, addr 0x18217cc90, size 0x30, virtual false, abstract: false, final false
inline void _ctor(int32_t  start, int32_t  count, ::UnityEngine::Splines::SliceDirection  direction) ;

/// @brief Method get_Count, addr 0x18038fe90, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_Direction, addr 0x1802f1880, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::SliceDirection get_Direction() ;

/// @brief Method get_End, addr 0x18217ccc0, size 0x30, virtual false, abstract: false, final false
inline int32_t get_End() ;

/// @brief Method get_Item, addr 0x18217ccf0, size 0x20, virtual false, abstract: false, final false
inline int32_t get_Item(int32_t  index) ;

/// @brief Method get_Start, addr 0x1803474c0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_Start() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* i___System__Collections__Generic__IEnumerable_1_int32_t_() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() ;

/// @brief Method set_Count, addr 0x18217cd10, size 0x20, virtual false, abstract: false, final false
inline void set_Count(int32_t  value) ;

/// @brief Method set_Direction, addr 0x1804bd900, size 0x10, virtual false, abstract: false, final false
inline void set_Direction(::UnityEngine::Splines::SliceDirection  value) ;

/// @brief Method set_Start, addr 0x180379030, size 0x10, virtual false, abstract: false, final false
inline void set_Start(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SplineRange() ;

// Ctor Parameters [CppParam { name: "m_Start", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Direction", ty: "::UnityEngine::Splines::SliceDirection", modifiers: "", def_value: None }]
constexpr SplineRange(int32_t  m_Start, int32_t  m_Count, ::UnityEngine::Splines::SliceDirection  m_Direction) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18759};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field m_Start, offset: 0x0, size: 0x4, def value: None
 int32_t  m_Start;

/// @brief Field m_Count, offset: 0x4, size: 0x4, def value: None
 int32_t  m_Count;

/// @brief Field m_Direction, offset: 0x8, size: 0x4, def value: None
 ::UnityEngine::Splines::SliceDirection  m_Direction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::SplineRange, m_Start) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineRange, m_Count) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::SplineRange, m_Direction) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::SplineRange) == 0xc, "Size mismatch!");

} // namespace end def UnityEngine::Splines
