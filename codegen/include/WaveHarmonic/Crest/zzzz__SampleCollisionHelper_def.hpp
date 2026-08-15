#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/SampleCollisionHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "WaveHarmonic/Crest/Internal/zzzz__SampleHelper_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SampleCollisionHelper)
namespace UnityEngine {
struct Vector3;
}
namespace WaveHarmonic::Crest {
struct CollisionLayer;
}
namespace WaveHarmonic::Crest {
struct SampleCollisionHelper_QueryOptions;
}
namespace WaveHarmonic::Crest {
struct SampleCollisionHelper_QueryType;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
struct SampleCollisionHelper_QueryOptions;
}
namespace WaveHarmonic::Crest {
struct SampleCollisionHelper_QueryType;
}
namespace WaveHarmonic::Crest {
class SampleCollisionHelper;
}
// Write type traits
MARK_VAL_T(::WaveHarmonic::Crest::SampleCollisionHelper_QueryOptions);
MARK_VAL_T(::WaveHarmonic::Crest::SampleCollisionHelper_QueryType);
MARK_REF_T(::WaveHarmonic::Crest::SampleCollisionHelper*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::SampleCollisionHelper_QueryOptions, "WaveHarmonic.Crest", "SampleCollisionHelper/QueryOptions");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::SampleCollisionHelper_QueryType, "WaveHarmonic.Crest", "SampleCollisionHelper/QueryType");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::SampleCollisionHelper*, "WaveHarmonic.Crest", "SampleCollisionHelper");
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: true
// CS Name: WaveHarmonic.Crest.SampleCollisionHelper/QueryType
struct CORDL_TYPE SampleCollisionHelper_QueryType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SampleCollisionHelper_QueryType_Unwrapped
enum struct __SampleCollisionHelper_QueryType_Unwrapped : int32_t {
__E_Displacement = static_cast<int32_t>(0x0),
__E_Height = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SampleCollisionHelper_QueryType_Unwrapped () const noexcept {
return static_cast<__SampleCollisionHelper_QueryType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SampleCollisionHelper_QueryType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SampleCollisionHelper_QueryType(int32_t  value__) noexcept;

/// @brief Field Displacement value: I32(0)
static ::WaveHarmonic::Crest::SampleCollisionHelper_QueryType const Displacement;

/// @brief Field Height value: I32(1)
static ::WaveHarmonic::Crest::SampleCollisionHelper_QueryType const Height;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16621};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::SampleCollisionHelper_QueryType, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::SampleCollisionHelper_QueryType) == 0x4, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: true
// CS Name: WaveHarmonic.Crest.SampleCollisionHelper/QueryOptions
struct CORDL_TYPE SampleCollisionHelper_QueryOptions {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SampleCollisionHelper_QueryOptions_Unwrapped
enum struct __SampleCollisionHelper_QueryOptions_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Velocity = static_cast<int32_t>(0x1),
__E_Normal = static_cast<int32_t>(0x2),
__E_All = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SampleCollisionHelper_QueryOptions_Unwrapped () const noexcept {
return static_cast<__SampleCollisionHelper_QueryOptions_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SampleCollisionHelper_QueryOptions() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SampleCollisionHelper_QueryOptions(int32_t  value__) noexcept;

/// @brief Field All value: I32(3)
static ::WaveHarmonic::Crest::SampleCollisionHelper_QueryOptions const All;

/// @brief Field None value: I32(0)
static ::WaveHarmonic::Crest::SampleCollisionHelper_QueryOptions const None;

/// @brief Field Normal value: I32(2)
static ::WaveHarmonic::Crest::SampleCollisionHelper_QueryOptions const Normal;

/// @brief Field Velocity value: I32(1)
static ::WaveHarmonic::Crest::SampleCollisionHelper_QueryOptions const Velocity;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16622};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::SampleCollisionHelper_QueryOptions, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::SampleCollisionHelper_QueryOptions) == 0x4, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies UnityEngine.Vector3, WaveHarmonic.Crest.Internal.SampleHelper
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.SampleCollisionHelper
class CORDL_TYPE SampleCollisionHelper : public ::WaveHarmonic::Crest::Internal::SampleHelper {
public:
// Declarations
using QueryOptions = ::WaveHarmonic::Crest::SampleCollisionHelper_QueryOptions;

using QueryType = ::WaveHarmonic::Crest::SampleCollisionHelper_QueryType;

/// @brief Field _QueryResultNormal, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__QueryResultNormal, put=__cordl_internal_set__QueryResultNormal)) ::ArrayW<::UnityEngine::Vector3>  _QueryResultNormal;

/// @brief Field _QueryResultVelocity, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__QueryResultVelocity, put=__cordl_internal_set__QueryResultVelocity)) ::ArrayW<::UnityEngine::Vector3>  _QueryResultVelocity;

static inline ::WaveHarmonic::Crest::SampleCollisionHelper* New_ctor() ;

/// @brief Method Sample, addr 0x18257d340, size 0x340, virtual false, abstract: false, final false
inline bool Sample(int32_t  id, ::UnityEngine::Vector3  position, ::by_ref<::UnityEngine::Vector3>  displacement, ::by_ref<float_t>  height, ::by_ref<::UnityEngine::Vector3>  velocity, ::by_ref<::UnityEngine::Vector3>  normal, ::WaveHarmonic::Crest::SampleCollisionHelper_QueryType  type, ::WaveHarmonic::Crest::SampleCollisionHelper_QueryOptions  options, ::WaveHarmonic::Crest::CollisionLayer  layer, float_t  minimumLength, bool  allowMultipleCallsPerFrame) ;

/// @brief Method Sample, addr 0x18257d750, size 0xd0, virtual false, abstract: false, final false
inline bool Sample(::UnityEngine::Vector3  position, ::by_ref<::UnityEngine::Vector3>  displacement, ::by_ref<::UnityEngine::Vector3>  normal, ::by_ref<::UnityEngine::Vector3>  velocity, float_t  minimumLength, ::WaveHarmonic::Crest::CollisionLayer  layer) ;

/// @brief Method Sample, addr 0x18257d1e0, size 0xd0, virtual false, abstract: false, final false
inline bool Sample(::UnityEngine::Vector3  position, ::by_ref<float_t>  height, float_t  minimumLength, ::WaveHarmonic::Crest::CollisionLayer  layer) ;

/// @brief Method Sample, addr 0x18257d820, size 0xd0, virtual false, abstract: false, final false
inline bool Sample(::UnityEngine::Vector3  position, ::by_ref<float_t>  height, ::by_ref<::UnityEngine::Vector3>  normal, float_t  minimumLength, ::WaveHarmonic::Crest::CollisionLayer  layer) ;

/// @brief Method Sample, addr 0x18257d680, size 0xd0, virtual false, abstract: false, final false
inline bool Sample(::UnityEngine::Vector3  position, ::by_ref<float_t>  height, ::by_ref<::UnityEngine::Vector3>  normal, ::by_ref<::UnityEngine::Vector3>  velocity, float_t  minimumLength, ::WaveHarmonic::Crest::CollisionLayer  layer) ;

/// @brief Method Sample, addr 0x1802e2bd0, size 0x10, virtual false, abstract: false, final false
inline bool Sample(::UnityEngine::Vector3  position, float_t  height, ::UnityEngine::Vector3  displacement, ::UnityEngine::Vector3  normal, ::UnityEngine::Vector3  velocity, float_t  minimumLength, ::WaveHarmonic::Crest::CollisionLayer  layer) ;

/// @brief Method SampleDisplacement, addr 0x18257cea0, size 0x80, virtual false, abstract: false, final false
inline bool SampleDisplacement(int32_t  id, ::UnityEngine::Vector3  position, ::by_ref<::UnityEngine::Vector3>  displacement, ::WaveHarmonic::Crest::CollisionLayer  layer, float_t  minimumLength, bool  allowMultipleCallsPerFrame) ;

/// @brief Method SampleDisplacement, addr 0x18257cd40, size 0x90, virtual false, abstract: false, final false
inline bool SampleDisplacement(int32_t  id, ::UnityEngine::Vector3  position, ::by_ref<::UnityEngine::Vector3>  displacement, ::by_ref<::UnityEngine::Vector3>  velocity, ::WaveHarmonic::Crest::CollisionLayer  layer, float_t  minimumLength, bool  allowMultipleCallsPerFrame) ;

/// @brief Method SampleDisplacement, addr 0x18257cbe0, size 0x90, virtual false, abstract: false, final false
inline bool SampleDisplacement(int32_t  id, ::UnityEngine::Vector3  position, ::by_ref<::UnityEngine::Vector3>  displacement, ::by_ref<::UnityEngine::Vector3>  velocity, ::by_ref<::UnityEngine::Vector3>  normal, ::WaveHarmonic::Crest::CollisionLayer  layer, float_t  minimumLength, bool  allowMultipleCallsPerFrame) ;

/// @brief Method SampleDisplacement, addr 0x18257cc70, size 0xd0, virtual false, abstract: false, final false
inline bool SampleDisplacement(::UnityEngine::Vector3  position, ::by_ref<::UnityEngine::Vector3>  displacement, float_t  minimumLength, ::WaveHarmonic::Crest::CollisionLayer  layer) ;

/// @brief Method SampleDisplacement, addr 0x18257cb10, size 0xd0, virtual false, abstract: false, final false
inline bool SampleDisplacement(::UnityEngine::Vector3  position, ::by_ref<::UnityEngine::Vector3>  displacement, ::by_ref<::UnityEngine::Vector3>  velocity, float_t  minimumLength, ::WaveHarmonic::Crest::CollisionLayer  layer) ;

/// @brief Method SampleDisplacement, addr 0x18257cdd0, size 0xd0, virtual false, abstract: false, final false
inline bool SampleDisplacement(::UnityEngine::Vector3  position, ::by_ref<::UnityEngine::Vector3>  displacement, ::by_ref<::UnityEngine::Vector3>  velocity, ::by_ref<::UnityEngine::Vector3>  normal, float_t  minimumLength, ::WaveHarmonic::Crest::CollisionLayer  layer) ;

/// @brief Method SampleHeight, addr 0x18257d2b0, size 0x90, virtual false, abstract: false, final false
inline bool SampleHeight(int32_t  id, ::UnityEngine::Vector3  position, ::by_ref<float_t>  height, ::WaveHarmonic::Crest::CollisionLayer  layer, float_t  minimumLength, bool  allowMultipleCallsPerFrame) ;

/// @brief Method SampleHeight, addr 0x18257cfb0, size 0x90, virtual false, abstract: false, final false
inline bool SampleHeight(int32_t  id, ::UnityEngine::Vector3  position, ::by_ref<float_t>  height, ::by_ref<::UnityEngine::Vector3>  velocity, ::WaveHarmonic::Crest::CollisionLayer  layer, float_t  minimumLength, bool  allowMultipleCallsPerFrame) ;

/// @brief Method SampleHeight, addr 0x18257cf20, size 0x90, virtual false, abstract: false, final false
inline bool SampleHeight(int32_t  id, ::UnityEngine::Vector3  position, ::by_ref<float_t>  height, ::by_ref<::UnityEngine::Vector3>  velocity, ::by_ref<::UnityEngine::Vector3>  normal, ::WaveHarmonic::Crest::CollisionLayer  layer, float_t  minimumLength, bool  allowMultipleCallsPerFrame) ;

/// @brief Method SampleHeight, addr 0x18257d1e0, size 0xd0, virtual false, abstract: false, final false
inline bool SampleHeight(::UnityEngine::Vector3  position, ::by_ref<float_t>  height, float_t  minimumLength, ::WaveHarmonic::Crest::CollisionLayer  layer) ;

/// @brief Method SampleHeight, addr 0x18257d110, size 0xd0, virtual false, abstract: false, final false
inline bool SampleHeight(::UnityEngine::Vector3  position, ::by_ref<float_t>  height, ::by_ref<::UnityEngine::Vector3>  velocity, float_t  minimumLength, ::WaveHarmonic::Crest::CollisionLayer  layer) ;

/// @brief Method SampleHeight, addr 0x18257d040, size 0xd0, virtual false, abstract: false, final false
inline bool SampleHeight(::UnityEngine::Vector3  position, ::by_ref<float_t>  height, ::by_ref<::UnityEngine::Vector3>  velocity, ::by_ref<::UnityEngine::Vector3>  normal, float_t  minimumLength, ::WaveHarmonic::Crest::CollisionLayer  layer) ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get__QueryResultNormal() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get__QueryResultNormal() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get__QueryResultVelocity() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get__QueryResultVelocity() ;

constexpr void __cordl_internal_set__QueryResultNormal(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set__QueryResultVelocity(::ArrayW<::UnityEngine::Vector3>  value) ;

/// @brief Method .ctor, addr 0x18257d8f0, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SampleCollisionHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SampleCollisionHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SampleCollisionHelper(SampleCollisionHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SampleCollisionHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SampleCollisionHelper(SampleCollisionHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16623};

/// @brief Field _QueryResultNormal, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ____QueryResultNormal;

/// @brief Field _QueryResultVelocity, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ____QueryResultVelocity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::SampleCollisionHelper, ____QueryResultNormal) == 0x28, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::SampleCollisionHelper, ____QueryResultVelocity) == 0x30, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::SampleCollisionHelper) == 0x38, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
