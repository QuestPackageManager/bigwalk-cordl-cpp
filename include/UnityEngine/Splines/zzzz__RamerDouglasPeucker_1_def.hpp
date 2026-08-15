#pragma once
// IWYU pragma private; include "UnityEngine/Splines/RamerDouglasPeucker_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RamerDouglasPeucker_1)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace Unity::Mathematics {
struct float3;
}
namespace UnityEngine::Splines {
template<typename T>
struct RamerDouglasPeucker_1_Range;
}
// Forward declare root types
namespace UnityEngine::Splines {
template<typename T>
class RamerDouglasPeucker_1;
}
namespace UnityEngine::Splines {
template<typename T>
struct RamerDouglasPeucker_1_Range;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::Splines::RamerDouglasPeucker_1);
MARK_GEN_VAL_T(::UnityEngine::Splines::RamerDouglasPeucker_1_Range);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Splines::RamerDouglasPeucker_1, "UnityEngine.Splines", "RamerDouglasPeucker`1");
DEFINE_IL2CPP_GEN_CLASS(::UnityEngine::Splines::RamerDouglasPeucker_1_Range, "UnityEngine.Splines", "RamerDouglasPeucker`1/Range");
// Dependencies 
namespace UnityEngine::Splines {
// cpp template
template<typename T>
// Is value type: true
// CS Name: UnityEngine.Splines.RamerDouglasPeucker`1/Range<T>
struct CORDL_TYPE RamerDouglasPeucker_1_Range {
public:
// Declarations
 __declspec(property(get=get_End)) int32_t  End;

/// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  start, int32_t  count) ;

/// @brief Method get_End, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_End() ;

// Ctor Parameters []
// @brief default ctor
constexpr RamerDouglasPeucker_1_Range() ;

// Ctor Parameters [CppParam { name: "Start", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RamerDouglasPeucker_1_Range(int32_t  Start, int32_t  Count) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18703};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Start, offset: 0x0, size: 0x4, def value: None
 int32_t  Start;

/// @brief Field Count, offset: 0x4, size: 0x4, def value: None
 int32_t  Count;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Splines
// Dependencies System.Object
namespace UnityEngine::Splines {
// cpp template
template<typename T>
// Is value type: false
// CS Name: UnityEngine.Splines.RamerDouglasPeucker`1<T>
class CORDL_TYPE RamerDouglasPeucker_1 : public ::System::Object {
public:
// Declarations
using Range = ::UnityEngine::Splines::RamerDouglasPeucker_1_Range<T>;

/// @brief Field m_Epsilon, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Epsilon, put=__cordl_internal_set_m_Epsilon)) float_t  m_Epsilon;

/// @brief Field m_Keep, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Keep, put=__cordl_internal_set_m_Keep)) ::ArrayW<bool>  m_Keep;

/// @brief Field m_KeepCount, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_KeepCount, put=__cordl_internal_set_m_KeepCount)) int32_t  m_KeepCount;

/// @brief Field m_Points, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Points, put=__cordl_internal_set_m_Points)) T  m_Points;

/// @brief Method Discard, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Discard(::UnityEngine::Splines::RamerDouglasPeucker_1_Range<T>  range) ;

/// @brief Method FindFarthest, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<int32_t,float_t> FindFarthest(::UnityEngine::Splines::RamerDouglasPeucker_1_Range<T>  range) ;

/// @brief Method Keep, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Keep(int32_t  index) ;

static inline ::UnityEngine::Splines::RamerDouglasPeucker_1<T>* New_ctor(T  points) ;

/// @brief Method Reduce, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Reduce(::UnityEngine::Splines::RamerDouglasPeucker_1_Range<T>  range) ;

/// @brief Method Reduce, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Reduce(::System::Collections::Generic::List_1<::Unity::Mathematics::float3>*  results, float_t  epsilon) ;

constexpr float_t const& __cordl_internal_get_m_Epsilon() const;

constexpr float_t& __cordl_internal_get_m_Epsilon() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_m_Keep() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_m_Keep() ;

constexpr int32_t const& __cordl_internal_get_m_KeepCount() const;

constexpr int32_t& __cordl_internal_get_m_KeepCount() ;

constexpr T const& __cordl_internal_get_m_Points() const;

constexpr T& __cordl_internal_get_m_Points() ;

constexpr void __cordl_internal_set_m_Epsilon(float_t  value) ;

constexpr void __cordl_internal_set_m_Keep(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set_m_KeepCount(int32_t  value) ;

constexpr void __cordl_internal_set_m_Points(T  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(T  points) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RamerDouglasPeucker_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RamerDouglasPeucker_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RamerDouglasPeucker_1(RamerDouglasPeucker_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RamerDouglasPeucker_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RamerDouglasPeucker_1(RamerDouglasPeucker_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18704};

/// @brief Field m_Points, offset: 0x10, size: 0x8, def value: None
 T  ___m_Points;

/// @brief Field m_Keep, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<bool>  ___m_Keep;

/// @brief Field m_Epsilon, offset: 0x20, size: 0x4, def value: None
 float_t  ___m_Epsilon;

/// @brief Field m_KeepCount, offset: 0x24, size: 0x4, def value: None
 int32_t  ___m_KeepCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Splines
