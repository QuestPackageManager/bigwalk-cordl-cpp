#pragma once
// IWYU pragma private; include "AmplifyImpostors/Triangulator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Triangulator)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace AmplifyImpostors {
class Triangulator;
}
// Write type traits
MARK_REF_T(::AmplifyImpostors::Triangulator*);
DEFINE_IL2CPP_CLASS(::AmplifyImpostors::Triangulator*, "AmplifyImpostors", "Triangulator");
// Dependencies System.Object
namespace AmplifyImpostors {
// Is value type: false
// CS Name: AmplifyImpostors.Triangulator
class CORDL_TYPE Triangulator : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Points)) ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  Points;

/// @brief Field m_points, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_points, put=__cordl_internal_set_m_points)) ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  m_points;

/// @brief Method Area, addr 0x1802dac50, size 0x80, virtual false, abstract: false, final false
inline float_t Area() ;

/// @brief Method InsideTriangle, addr 0x1802dacd0, size 0x110, virtual false, abstract: false, final false
inline bool InsideTriangle(::UnityEngine::Vector2  pt, ::UnityEngine::Vector2  v1, ::UnityEngine::Vector2  v2, ::UnityEngine::Vector2  v3) ;

static inline ::AmplifyImpostors::Triangulator* New_ctor(::ArrayW<::UnityEngine::Vector2>  points) ;

static inline ::AmplifyImpostors::Triangulator* New_ctor(::ArrayW<::UnityEngine::Vector2>  points, bool  invertY) ;

/// @brief Method Snip, addr 0x1802dade0, size 0x1f0, virtual false, abstract: false, final false
inline bool Snip(int32_t  u, int32_t  v, int32_t  w, int32_t  n, ::ArrayW<int32_t>  V) ;

/// @brief Method Triangulate, addr 0x1802dafd0, size 0x300, virtual false, abstract: false, final false
inline ::ArrayW<int32_t> Triangulate() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* const& __cordl_internal_get_m_points() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*& __cordl_internal_get_m_points() ;

constexpr void __cordl_internal_set_m_points(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  value) ;

/// @brief Method .ctor, addr 0x1802db2d0, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::UnityEngine::Vector2>  points) ;

/// @brief Method .ctor, addr 0x1802db350, size 0x150, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::UnityEngine::Vector2>  points, bool  invertY) ;

/// @brief Method get_Points, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* get_Points() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Triangulator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Triangulator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Triangulator(Triangulator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Triangulator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Triangulator(Triangulator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20969};

/// @brief Field m_points, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  ___m_points;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::AmplifyImpostors::Triangulator, ___m_points) == 0x10, "Offset mismatch!");

static_assert(sizeof(::AmplifyImpostors::Triangulator) == 0x18, "Size mismatch!");

} // namespace end def AmplifyImpostors
