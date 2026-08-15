#pragma once
// IWYU pragma private; include "UnityEngine/Splines/EmbeddedSplineData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Splines/zzzz__EmbeddedSplineDataType_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EmbeddedSplineData)
namespace Unity::Mathematics {
struct float4;
}
namespace UnityEngine::Splines {
struct EmbeddedSplineDataType;
}
namespace UnityEngine::Splines {
class SplineContainer;
}
namespace UnityEngine::Splines {
template<typename T>
class SplineData_1;
}
namespace UnityEngine::Splines {
class Spline;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Splines {
class EmbeddedSplineData;
}
// Write type traits
MARK_REF_T(::UnityEngine::Splines::EmbeddedSplineData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::EmbeddedSplineData*, "UnityEngine.Splines", "EmbeddedSplineData");
// Dependencies System.Object, UnityEngine.Splines.EmbeddedSplineDataType
namespace UnityEngine::Splines {
// Is value type: false
// CS Name: UnityEngine.Splines.EmbeddedSplineData
class CORDL_TYPE EmbeddedSplineData : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Container, put=set_Container)) ::UnityW<::UnityEngine::Splines::SplineContainer>  Container;

 __declspec(property(get=get_Key, put=set_Key)) ::StringW  Key;

 __declspec(property(get=get_SplineIndex, put=set_SplineIndex)) int32_t  SplineIndex;

 __declspec(property(get=get_Type, put=set_Type)) ::UnityEngine::Splines::EmbeddedSplineDataType  Type;

/// @brief Field m_Container, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Container, put=__cordl_internal_set_m_Container)) ::UnityW<::UnityEngine::Splines::SplineContainer>  m_Container;

/// @brief Field m_Key, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Key, put=__cordl_internal_set_m_Key)) ::StringW  m_Key;

/// @brief Field m_SplineIndex, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SplineIndex, put=__cordl_internal_set_m_SplineIndex)) int32_t  m_SplineIndex;

/// @brief Field m_Type, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Type, put=__cordl_internal_set_m_Type)) ::UnityEngine::Splines::EmbeddedSplineDataType  m_Type;

/// @brief Method GetOrCreateFloat4Data, addr 0x1821657d0, size 0x130, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::SplineData_1<::Unity::Mathematics::float4>* GetOrCreateFloat4Data() ;

/// @brief Method GetOrCreateFloatData, addr 0x182165900, size 0x130, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::SplineData_1<float_t>* GetOrCreateFloatData() ;

/// @brief Method GetOrCreateIntData, addr 0x182165a30, size 0x130, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::SplineData_1<int32_t>* GetOrCreateIntData() ;

/// @brief Method GetOrCreateObjectData, addr 0x182165b60, size 0x130, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::SplineData_1<::UnityW<::UnityEngine::Object>>* GetOrCreateObjectData() ;

static inline ::UnityEngine::Splines::EmbeddedSplineData* New_ctor() ;

static inline ::UnityEngine::Splines::EmbeddedSplineData* New_ctor(::StringW  key, ::UnityEngine::Splines::EmbeddedSplineDataType  type, ::UnityEngine::Splines::SplineContainer*  container, int32_t  splineIndex) ;

/// @brief Method TryGetFloat4Data, addr 0x182165c90, size 0x130, virtual false, abstract: false, final false
inline bool TryGetFloat4Data(::by_ref<::UnityEngine::Splines::SplineData_1<::Unity::Mathematics::float4>*>  data) ;

/// @brief Method TryGetFloatData, addr 0x182165dc0, size 0x130, virtual false, abstract: false, final false
inline bool TryGetFloatData(::by_ref<::UnityEngine::Splines::SplineData_1<float_t>*>  data) ;

/// @brief Method TryGetIntData, addr 0x182165ef0, size 0x130, virtual false, abstract: false, final false
inline bool TryGetIntData(::by_ref<::UnityEngine::Splines::SplineData_1<int32_t>*>  data) ;

/// @brief Method TryGetObjectData, addr 0x182166020, size 0x130, virtual false, abstract: false, final false
inline bool TryGetObjectData(::by_ref<::UnityEngine::Splines::SplineData_1<::UnityW<::UnityEngine::Object>>*>  data) ;

/// @brief Method TryGetSpline, addr 0x182166150, size 0xa0, virtual false, abstract: false, final false
inline bool TryGetSpline(::by_ref<::UnityEngine::Splines::Spline*>  spline) ;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer> const& __cordl_internal_get_m_Container() const;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer>& __cordl_internal_get_m_Container() ;

constexpr ::StringW const& __cordl_internal_get_m_Key() const;

constexpr ::StringW& __cordl_internal_get_m_Key() ;

constexpr int32_t const& __cordl_internal_get_m_SplineIndex() const;

constexpr int32_t& __cordl_internal_get_m_SplineIndex() ;

constexpr ::UnityEngine::Splines::EmbeddedSplineDataType const& __cordl_internal_get_m_Type() const;

constexpr ::UnityEngine::Splines::EmbeddedSplineDataType& __cordl_internal_get_m_Type() ;

constexpr void __cordl_internal_set_m_Container(::UnityW<::UnityEngine::Splines::SplineContainer>  value) ;

constexpr void __cordl_internal_set_m_Key(::StringW  value) ;

constexpr void __cordl_internal_set_m_SplineIndex(int32_t  value) ;

constexpr void __cordl_internal_set_m_Type(::UnityEngine::Splines::EmbeddedSplineDataType  value) ;

/// @brief Method .ctor, addr 0x1821661f0, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x182166240, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::StringW  key, ::UnityEngine::Splines::EmbeddedSplineDataType  type, ::UnityEngine::Splines::SplineContainer*  container, int32_t  splineIndex) ;

/// @brief Method get_Container, addr 0x1802db4a0, size 0x10, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Splines::SplineContainer> get_Container() ;

/// @brief Method get_Key, addr 0x1802d97e0, size 0x10, virtual false, abstract: false, final false
inline ::StringW get_Key() ;

/// @brief Method get_SplineIndex, addr 0x1802f41a0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_SplineIndex() ;

/// @brief Method get_Type, addr 0x1802f42c0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::EmbeddedSplineDataType get_Type() ;

/// @brief Method set_Container, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void set_Container(::UnityEngine::Splines::SplineContainer*  value) ;

/// @brief Method set_Key, addr 0x1802d9820, size 0x10, virtual false, abstract: false, final false
inline void set_Key(::StringW  value) ;

/// @brief Method set_SplineIndex, addr 0x1802f4390, size 0x10, virtual false, abstract: false, final false
inline void set_SplineIndex(int32_t  value) ;

/// @brief Method set_Type, addr 0x1802f43d0, size 0x10, virtual false, abstract: false, final false
inline void set_Type(::UnityEngine::Splines::EmbeddedSplineDataType  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EmbeddedSplineData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EmbeddedSplineData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EmbeddedSplineData(EmbeddedSplineData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EmbeddedSplineData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EmbeddedSplineData(EmbeddedSplineData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18686};

/// @brief Field m_Container, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Splines::SplineContainer>  ___m_Container;

/// @brief Field m_SplineIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  ___m_SplineIndex;

/// @brief Field m_Type, offset: 0x1c, size: 0x4, def value: None
 ::UnityEngine::Splines::EmbeddedSplineDataType  ___m_Type;

/// @brief Field m_Key, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___m_Key;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::EmbeddedSplineData, ___m_Container) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::EmbeddedSplineData, ___m_SplineIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::EmbeddedSplineData, ___m_Type) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Splines::EmbeddedSplineData, ___m_Key) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::EmbeddedSplineData) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Splines
