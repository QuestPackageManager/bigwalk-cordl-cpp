#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/ICollisionProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ICollisionProvider)
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace WaveHarmonic::Crest {
struct CollisionLayer;
}
namespace WaveHarmonic::Crest {
class ICollisionProvider_NoneProvider;
}
namespace WaveHarmonic::Crest {
class IQueryProvider;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class ICollisionProvider;
}
namespace WaveHarmonic::Crest {
class ICollisionProvider_NoneProvider;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::ICollisionProvider*);
MARK_REF_T(::WaveHarmonic::Crest::ICollisionProvider_NoneProvider*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::ICollisionProvider*, "WaveHarmonic.Crest", "ICollisionProvider");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::ICollisionProvider_NoneProvider*, "WaveHarmonic.Crest", "ICollisionProvider/NoneProvider");
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.ICollisionProvider/NoneProvider
class CORDL_TYPE ICollisionProvider_NoneProvider : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::WaveHarmonic::Crest::ICollisionProvider"
constexpr operator  ::WaveHarmonic::Crest::ICollisionProvider*() noexcept;

/// @brief Convert operator to "::WaveHarmonic::Crest::IQueryProvider"
constexpr operator  ::WaveHarmonic::Crest::IQueryProvider*() noexcept;

static inline ::WaveHarmonic::Crest::ICollisionProvider_NoneProvider* New_ctor() ;

/// @brief Method Query, addr 0x182578910, size 0xa0, virtual true, abstract: false, final true
inline int32_t Query(int32_t  _0, float_t  _1, ::ArrayW<::UnityEngine::Vector3>  _2, ::ArrayW<::UnityEngine::Vector3>  result0, ::ArrayW<::UnityEngine::Vector3>  result1, ::ArrayW<::UnityEngine::Vector3>  result2, ::WaveHarmonic::Crest::CollisionLayer  _3, ::System::Nullable_1<::UnityEngine::Vector3>  _4) ;

/// @brief Method Query, addr 0x1825789e0, size 0xd0, virtual true, abstract: false, final true
inline int32_t Query(int32_t  _0, float_t  _1, ::ArrayW<::UnityEngine::Vector3>  _2, ::ArrayW<float_t>  result0, ::ArrayW<::UnityEngine::Vector3>  result1, ::ArrayW<::UnityEngine::Vector3>  result2, ::WaveHarmonic::Crest::CollisionLayer  _3, ::System::Nullable_1<::UnityEngine::Vector3>  _4) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::WaveHarmonic::Crest::ICollisionProvider"
constexpr ::WaveHarmonic::Crest::ICollisionProvider* i___WaveHarmonic__Crest__ICollisionProvider() noexcept;

/// @brief Convert to "::WaveHarmonic::Crest::IQueryProvider"
constexpr ::WaveHarmonic::Crest::IQueryProvider* i___WaveHarmonic__Crest__IQueryProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ICollisionProvider_NoneProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ICollisionProvider_NoneProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ICollisionProvider_NoneProvider(ICollisionProvider_NoneProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ICollisionProvider_NoneProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICollisionProvider_NoneProvider(ICollisionProvider_NoneProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16591};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::ICollisionProvider_NoneProvider) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.ICollisionProvider
class CORDL_TYPE ICollisionProvider {
public:
// Declarations
using NoneProvider = ::WaveHarmonic::Crest::ICollisionProvider_NoneProvider;

/// @brief Field <None>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__None_k__BackingField, put=setStaticF__None_k__BackingField)) ::WaveHarmonic::Crest::ICollisionProvider_NoneProvider*  _None_k__BackingField;

/// @brief Convert operator to "::WaveHarmonic::Crest::IQueryProvider"
constexpr operator  ::WaveHarmonic::Crest::IQueryProvider*() noexcept;

/// @brief Method Create, addr 0x182575640, size 0x120, virtual false, abstract: false, final false
static inline ::WaveHarmonic::Crest::ICollisionProvider* Create(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method Query, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t Query(int32_t  hash, float_t  minimumLength, ::ArrayW<::UnityEngine::Vector3>  points, ::ArrayW<::UnityEngine::Vector3>  displacements, ::ArrayW<::UnityEngine::Vector3>  normals, ::ArrayW<::UnityEngine::Vector3>  velocities, ::WaveHarmonic::Crest::CollisionLayer  layer, ::System::Nullable_1<::UnityEngine::Vector3>  center) ;

/// @brief Method Query, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t Query(int32_t  hash, float_t  minimumLength, ::ArrayW<::UnityEngine::Vector3>  points, ::ArrayW<float_t>  heights, ::ArrayW<::UnityEngine::Vector3>  normals, ::ArrayW<::UnityEngine::Vector3>  velocities, ::WaveHarmonic::Crest::CollisionLayer  layer, ::System::Nullable_1<::UnityEngine::Vector3>  center) ;

static inline ::WaveHarmonic::Crest::ICollisionProvider_NoneProvider* getStaticF__None_k__BackingField() ;

/// @brief Method get_None, addr 0x1825757a0, size 0x40, virtual false, abstract: false, final false
static inline ::WaveHarmonic::Crest::ICollisionProvider_NoneProvider* get_None() ;

/// @brief Convert to "::WaveHarmonic::Crest::IQueryProvider"
constexpr ::WaveHarmonic::Crest::IQueryProvider* i___WaveHarmonic__Crest__IQueryProvider() noexcept;

static inline void setStaticF__None_k__BackingField(::WaveHarmonic::Crest::ICollisionProvider_NoneProvider*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "ICollisionProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICollisionProvider(ICollisionProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16592};

/// @brief Field k_LayerTooltip offset 0xffffffff size 0x8
static constexpr ::ConstString  k_LayerTooltip{u"Which water collision layer to target."};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def WaveHarmonic::Crest
