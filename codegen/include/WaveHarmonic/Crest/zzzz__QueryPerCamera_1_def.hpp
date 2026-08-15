#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/QueryPerCamera_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(QueryPerCamera_1)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace WaveHarmonic::Crest {
class IQueryable;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
template<typename T>
class QueryPerCamera_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::WaveHarmonic::Crest::QueryPerCamera_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::WaveHarmonic::Crest::QueryPerCamera_1, "WaveHarmonic.Crest", "QueryPerCamera`1");
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// cpp template
template<typename T>
// Is value type: false
// CS Name: WaveHarmonic.Crest.QueryPerCamera`1<T>
class CORDL_TYPE QueryPerCamera_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_QueryCount)) int32_t  QueryCount;

 __declspec(property(get=get_RequestCount)) int32_t  RequestCount;

 __declspec(property(get=get_ResultGuidCount)) int32_t  ResultGuidCount;

/// @brief Field _Providers, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Providers, put=__cordl_internal_set__Providers)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,T>*  _Providers;

/// @brief Field _Water, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Water, put=__cordl_internal_set__Water)) ::UnityW<::WaveHarmonic::Crest::WaterRenderer>  _Water;

/// @brief Convert operator to "::WaveHarmonic::Crest::IQueryable"
constexpr operator  ::WaveHarmonic::Crest::IQueryable*() noexcept;

/// @brief Method CleanUp, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void CleanUp() ;

/// @brief Method FindCenter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 FindCenter(::ArrayW<::UnityEngine::Vector3>  queries, ::System::Nullable_1<::UnityEngine::Vector3>  center) ;

/// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Initialize(::WaveHarmonic::Crest::WaterRenderer*  water) ;

static inline ::WaveHarmonic::Crest::QueryPerCamera_1<T>* New_ctor(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method SendReadBack, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void SendReadBack(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method UpdateQueries, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void UpdateQueries(::WaveHarmonic::Crest::WaterRenderer*  water) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,T>* const& __cordl_internal_get__Providers() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,T>*& __cordl_internal_get__Providers() ;

constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer> const& __cordl_internal_get__Water() const;

constexpr ::UnityW<::WaveHarmonic::Crest::WaterRenderer>& __cordl_internal_get__Water() ;

constexpr void __cordl_internal_set__Providers(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,T>*  value) ;

constexpr void __cordl_internal_set__Water(::UnityW<::WaveHarmonic::Crest::WaterRenderer>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method get_QueryCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_QueryCount() ;

/// @brief Method get_RequestCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_RequestCount() ;

/// @brief Method get_ResultGuidCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_ResultGuidCount() ;

/// @brief Convert to "::WaveHarmonic::Crest::IQueryable"
constexpr ::WaveHarmonic::Crest::IQueryable* i___WaveHarmonic__Crest__IQueryable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QueryPerCamera_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QueryPerCamera_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
QueryPerCamera_1(QueryPerCamera_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QueryPerCamera_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
QueryPerCamera_1(QueryPerCamera_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16617};

/// @brief Field _Water, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::WaveHarmonic::Crest::WaterRenderer>  ____Water;

/// @brief Field _Providers, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,T>*  ____Providers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def WaveHarmonic::Crest
