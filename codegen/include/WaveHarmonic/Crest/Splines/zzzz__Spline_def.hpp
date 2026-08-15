#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Splines/Spline.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__ManagedBehaviour_1_def.hpp"
#include "WaveHarmonic/Crest/Splines/zzzz__SplineOffset_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Spline)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Splines {
class SplineContainer;
}
namespace UnityEngine::Splines {
struct SplineModification;
}
namespace UnityEngine::Splines {
class Spline;
}
namespace UnityEngine {
class Transform;
}
namespace WaveHarmonic::Crest::Splines {
class IReceiveSplineChangeMessages;
}
namespace WaveHarmonic::Crest::Splines {
struct SplineOffset;
}
namespace WaveHarmonic::Crest::Splines {
class SplinePoint;
}
namespace WaveHarmonic::Crest::Splines {
class Spline_DebugFields;
}
namespace WaveHarmonic::Crest {
class LodInput;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest::Splines {
class Spline;
}
namespace WaveHarmonic::Crest::Splines {
class Spline_DebugFields;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::Splines::Spline*);
MARK_REF_T(::WaveHarmonic::Crest::Splines::Spline_DebugFields*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Splines::Spline*, "WaveHarmonic.Crest.Splines", "Spline");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Splines::Spline_DebugFields*, "WaveHarmonic.Crest.Splines", "Spline/DebugFields");
// Dependencies System.Object
namespace WaveHarmonic::Crest::Splines {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Splines.Spline/DebugFields
class CORDL_TYPE Spline_DebugFields : public ::System::Object {
public:
// Declarations
/// @brief Field _UpdateEveryFrame, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__UpdateEveryFrame, put=__cordl_internal_set__UpdateEveryFrame)) bool  _UpdateEveryFrame;

static inline ::WaveHarmonic::Crest::Splines::Spline_DebugFields* New_ctor() ;

constexpr bool const& __cordl_internal_get__UpdateEveryFrame() const;

constexpr bool& __cordl_internal_get__UpdateEveryFrame() ;

constexpr void __cordl_internal_set__UpdateEveryFrame(bool  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Spline_DebugFields() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Spline_DebugFields", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Spline_DebugFields(Spline_DebugFields && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Spline_DebugFields", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Spline_DebugFields(Spline_DebugFields const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21088};

/// @brief Field _UpdateEveryFrame, offset: 0x10, size: 0x1, def value: None
 bool  ____UpdateEveryFrame;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::Splines::Spline_DebugFields, ____UpdateEveryFrame) == 0x10, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::Splines::Spline_DebugFields) == 0x18, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest::Splines
// Dependencies WaveHarmonic.Crest.Internal.ManagedBehaviour`1<T>, WaveHarmonic.Crest.Splines.SplineOffset
namespace WaveHarmonic::Crest::Splines {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Splines.Spline
class CORDL_TYPE Spline : public ::WaveHarmonic::Crest::Internal::ManagedBehaviour_1<::UnityW<::WaveHarmonic::Crest::WaterRenderer>> {
public:
// Declarations
using DebugFields = ::WaveHarmonic::Crest::Splines::Spline_DebugFields;

 __declspec(property(get=get_Closed, put=set_Closed)) bool  Closed;

 __declspec(property(get=get_HasSource)) bool  HasSource;

 __declspec(property(get=get_Offset, put=set_Offset)) ::WaveHarmonic::Crest::Splines::SplineOffset  Offset;

 __declspec(property(get=get_Radius, put=set_Radius)) float_t  Radius;

 __declspec(property(get=get_Subdivisions, put=set_Subdivisions)) int32_t  Subdivisions;

/// @brief Field _Closed, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get__Closed, put=__cordl_internal_set__Closed)) bool  _Closed;

/// @brief Field _Debug, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__Debug, put=__cordl_internal_set__Debug)) ::WaveHarmonic::Crest::Splines::Spline_DebugFields*  _Debug;

/// @brief Field _Offset, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__Offset, put=__cordl_internal_set__Offset)) ::WaveHarmonic::Crest::Splines::SplineOffset  _Offset;

/// @brief Field _Radius, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__Radius, put=__cordl_internal_set__Radius)) float_t  _Radius;

/// @brief Field _Source, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__Source, put=__cordl_internal_set__Source)) ::UnityW<::UnityEngine::Splines::SplineContainer>  _Source;

/// @brief Field _Subdivisions, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__Subdivisions, put=__cordl_internal_set__Subdivisions)) int32_t  _Subdivisions;

/// @brief Field s_Inputs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Inputs, put=setStaticF_s_Inputs)) ::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::LodInput>>*  s_Inputs;

/// @brief Field s_Points, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Points, put=setStaticF_s_Points)) ::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::Splines::SplinePoint>>*  s_Points;

/// @brief Field s_Receivers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Receivers, put=setStaticF_s_Receivers)) ::System::Collections::Generic::List_1<::WaveHarmonic::Crest::Splines::IReceiveSplineChangeMessages*>*  s_Receivers;

/// @brief Method HasSplinePoints, addr 0x18256fef0, size 0xa0, virtual false, abstract: false, final false
inline bool HasSplinePoints() ;

/// @brief Method Initialize, addr 0x1825702d0, size 0xe0, virtual true, abstract: false, final false
inline void Initialize() ;

/// @brief Method InitializeFromContainer, addr 0x18256ff90, size 0x340, virtual false, abstract: false, final false
inline void InitializeFromContainer() ;

static inline ::WaveHarmonic::Crest::Splines::Spline* New_ctor() ;

/// @brief Method NotifyReceivers, addr 0x1825703b0, size 0x230, virtual false, abstract: false, final false
static inline void NotifyReceivers(::UnityEngine::Transform*  sibling) ;

/// @brief Method OnDisable, addr 0x1825705e0, size 0x60, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x182570640, size 0x80, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnSplineChanged, addr 0x1825706c0, size 0x850, virtual false, abstract: false, final false
inline void OnSplineChanged(::UnityEngine::Splines::Spline*  spline, int32_t  index, ::UnityEngine::Splines::SplineModification  modification) ;

/// @brief Method UpdateSpline, addr 0x182570f10, size 0x20, virtual false, abstract: false, final false
inline void UpdateSpline() ;

constexpr bool const& __cordl_internal_get__Closed() const;

constexpr bool& __cordl_internal_get__Closed() ;

constexpr ::WaveHarmonic::Crest::Splines::Spline_DebugFields* const& __cordl_internal_get__Debug() const;

constexpr ::WaveHarmonic::Crest::Splines::Spline_DebugFields*& __cordl_internal_get__Debug() ;

constexpr ::WaveHarmonic::Crest::Splines::SplineOffset const& __cordl_internal_get__Offset() const;

constexpr ::WaveHarmonic::Crest::Splines::SplineOffset& __cordl_internal_get__Offset() ;

constexpr float_t const& __cordl_internal_get__Radius() const;

constexpr float_t& __cordl_internal_get__Radius() ;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer> const& __cordl_internal_get__Source() const;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer>& __cordl_internal_get__Source() ;

constexpr int32_t const& __cordl_internal_get__Subdivisions() const;

constexpr int32_t& __cordl_internal_get__Subdivisions() ;

constexpr void __cordl_internal_set__Closed(bool  value) ;

constexpr void __cordl_internal_set__Debug(::WaveHarmonic::Crest::Splines::Spline_DebugFields*  value) ;

constexpr void __cordl_internal_set__Offset(::WaveHarmonic::Crest::Splines::SplineOffset  value) ;

constexpr void __cordl_internal_set__Radius(float_t  value) ;

constexpr void __cordl_internal_set__Source(::UnityW<::UnityEngine::Splines::SplineContainer>  value) ;

constexpr void __cordl_internal_set__Subdivisions(int32_t  value) ;

/// @brief Method .ctor, addr 0x182571020, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::LodInput>>* getStaticF_s_Inputs() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::Splines::SplinePoint>>* getStaticF_s_Points() ;

static inline ::System::Collections::Generic::List_1<::WaveHarmonic::Crest::Splines::IReceiveSplineChangeMessages*>* getStaticF_s_Receivers() ;

/// @brief Method get_Closed, addr 0x1802e09d0, size 0x10, virtual false, abstract: false, final false
inline bool get_Closed() ;

/// @brief Method get_HasSource, addr 0x1805f3820, size 0x10, virtual false, abstract: false, final false
inline bool get_HasSource() ;

/// @brief Method get_Offset, addr 0x1802e0b20, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::Splines::SplineOffset get_Offset() ;

/// @brief Method get_Radius, addr 0x18046fae0, size 0x10, virtual false, abstract: false, final false
inline float_t get_Radius() ;

/// @brief Method get_Subdivisions, addr 0x180de9ef0, size 0x60, virtual false, abstract: false, final false
inline int32_t get_Subdivisions() ;

static inline void setStaticF_s_Inputs(::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::LodInput>>*  value) ;

static inline void setStaticF_s_Points(::System::Collections::Generic::List_1<::UnityW<::WaveHarmonic::Crest::Splines::SplinePoint>>*  value) ;

static inline void setStaticF_s_Receivers(::System::Collections::Generic::List_1<::WaveHarmonic::Crest::Splines::IReceiveSplineChangeMessages*>*  value) ;

/// @brief Method set_Closed, addr 0x18051e980, size 0x10, virtual false, abstract: false, final false
inline void set_Closed(bool  value) ;

/// @brief Method set_Offset, addr 0x1802e0d10, size 0x10, virtual false, abstract: false, final false
inline void set_Offset(::WaveHarmonic::Crest::Splines::SplineOffset  value) ;

/// @brief Method set_Radius, addr 0x18046fb20, size 0x10, virtual false, abstract: false, final false
inline void set_Radius(float_t  value) ;

/// @brief Method set_Subdivisions, addr 0x180de9f50, size 0xe0, virtual false, abstract: false, final false
inline void set_Subdivisions(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Spline() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Spline", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Spline(Spline && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Spline", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Spline(Spline const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21089};

/// @brief Field _Source, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Splines::SplineContainer>  ____Source;

/// @brief Field _Offset, offset: 0x58, size: 0x4, def value: None
 ::WaveHarmonic::Crest::Splines::SplineOffset  ____Offset;

/// @brief Field _Closed, offset: 0x5c, size: 0x1, def value: None
 bool  ____Closed;

/// @brief Field _Radius, offset: 0x60, size: 0x4, def value: None
 float_t  ____Radius;

/// @brief Field _Subdivisions, offset: 0x64, size: 0x4, def value: None
 int32_t  ____Subdivisions;

/// @brief Field _Debug, offset: 0x68, size: 0x8, def value: None
 ::WaveHarmonic::Crest::Splines::Spline_DebugFields*  ____Debug;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::Splines::Spline, ____Source) == 0x50, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Splines::Spline, ____Offset) == 0x58, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Splines::Spline, ____Closed) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Splines::Spline, ____Radius) == 0x60, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Splines::Spline, ____Subdivisions) == 0x64, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Splines::Spline, ____Debug) == 0x68, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::Splines::Spline) == 0x70, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest::Splines
