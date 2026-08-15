#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/IFlowProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IFlowProvider)
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace WaveHarmonic::Crest {
class IFlowProvider_NoneProvider;
}
namespace WaveHarmonic::Crest {
class IQueryProvider;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class IFlowProvider;
}
namespace WaveHarmonic::Crest {
class IFlowProvider_NoneProvider;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::IFlowProvider*);
MARK_REF_T(::WaveHarmonic::Crest::IFlowProvider_NoneProvider*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::IFlowProvider*, "WaveHarmonic.Crest", "IFlowProvider");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::IFlowProvider_NoneProvider*, "WaveHarmonic.Crest", "IFlowProvider/NoneProvider");
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.IFlowProvider/NoneProvider
class CORDL_TYPE IFlowProvider_NoneProvider : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::WaveHarmonic::Crest::IFlowProvider"
constexpr operator  ::WaveHarmonic::Crest::IFlowProvider*() noexcept;

/// @brief Convert operator to "::WaveHarmonic::Crest::IQueryProvider"
constexpr operator  ::WaveHarmonic::Crest::IQueryProvider*() noexcept;

static inline ::WaveHarmonic::Crest::IFlowProvider_NoneProvider* New_ctor() ;

/// @brief Method Query, addr 0x1825789b0, size 0x30, virtual true, abstract: false, final true
inline int32_t Query(int32_t  _0, float_t  _1, ::ArrayW<::UnityEngine::Vector3>  _2, ::ArrayW<::UnityEngine::Vector3>  result, ::System::Nullable_1<::UnityEngine::Vector3>  _3) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::WaveHarmonic::Crest::IFlowProvider"
constexpr ::WaveHarmonic::Crest::IFlowProvider* i___WaveHarmonic__Crest__IFlowProvider() noexcept;

/// @brief Convert to "::WaveHarmonic::Crest::IQueryProvider"
constexpr ::WaveHarmonic::Crest::IQueryProvider* i___WaveHarmonic__Crest__IQueryProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IFlowProvider_NoneProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IFlowProvider_NoneProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IFlowProvider_NoneProvider(IFlowProvider_NoneProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IFlowProvider_NoneProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IFlowProvider_NoneProvider(IFlowProvider_NoneProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16603};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::IFlowProvider_NoneProvider) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies 
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.IFlowProvider
class CORDL_TYPE IFlowProvider {
public:
// Declarations
using NoneProvider = ::WaveHarmonic::Crest::IFlowProvider_NoneProvider;

/// @brief Field <None>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__None_k__BackingField, put=setStaticF__None_k__BackingField)) ::WaveHarmonic::Crest::IFlowProvider_NoneProvider*  _None_k__BackingField;

/// @brief Convert operator to "::WaveHarmonic::Crest::IQueryProvider"
constexpr operator  ::WaveHarmonic::Crest::IQueryProvider*() noexcept;

/// @brief Method Create, addr 0x1825758e0, size 0x80, virtual false, abstract: false, final false
static inline ::WaveHarmonic::Crest::IFlowProvider* Create(::WaveHarmonic::Crest::WaterRenderer*  water) ;

/// @brief Method Query, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t Query(int32_t  hash, float_t  minimumLength, ::ArrayW<::UnityEngine::Vector3>  points, ::ArrayW<::UnityEngine::Vector3>  results, ::System::Nullable_1<::UnityEngine::Vector3>  center) ;

static inline ::WaveHarmonic::Crest::IFlowProvider_NoneProvider* getStaticF__None_k__BackingField() ;

/// @brief Method get_None, addr 0x1825759a0, size 0x40, virtual false, abstract: false, final false
static inline ::WaveHarmonic::Crest::IFlowProvider_NoneProvider* get_None() ;

/// @brief Convert to "::WaveHarmonic::Crest::IQueryProvider"
constexpr ::WaveHarmonic::Crest::IQueryProvider* i___WaveHarmonic__Crest__IQueryProvider() noexcept;

static inline void setStaticF__None_k__BackingField(::WaveHarmonic::Crest::IFlowProvider_NoneProvider*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IFlowProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IFlowProvider(IFlowProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16604};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def WaveHarmonic::Crest
