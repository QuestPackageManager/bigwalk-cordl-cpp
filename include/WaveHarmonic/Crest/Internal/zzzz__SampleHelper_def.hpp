#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Internal/SampleHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SampleHelper)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
struct Vector3;
}
namespace WaveHarmonic::Crest {
struct CollisionLayer;
}
// Forward declare root types
namespace WaveHarmonic::Crest::Internal {
class SampleHelper;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::Internal::SampleHelper*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Internal::SampleHelper*, "WaveHarmonic.Crest.Internal", "SampleHelper");
// Dependencies System.Object, UnityEngine.Vector3
namespace WaveHarmonic::Crest::Internal {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Internal.SampleHelper
class CORDL_TYPE SampleHelper : public ::System::Object {
public:
// Declarations
/// @brief Field _LastFrame, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__LastFrame, put=__cordl_internal_set__LastFrame)) ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  _LastFrame;

/// @brief Field _QueryPosition, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__QueryPosition, put=__cordl_internal_set__QueryPosition)) ::ArrayW<::UnityEngine::Vector3>  _QueryPosition;

/// @brief Field _QueryResult, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__QueryResult, put=__cordl_internal_set__QueryResult)) ::ArrayW<::UnityEngine::Vector3>  _QueryResult;

static inline ::WaveHarmonic::Crest::Internal::SampleHelper* New_ctor(int32_t  queryCount) ;

/// @brief Method Sample, addr 0x1802e2bd0, size 0x10, virtual false, abstract: false, final false
inline bool Sample(::UnityEngine::Vector3  position, float_t  minimumLength, ::WaveHarmonic::Crest::CollisionLayer  layer) ;

/// @brief Method Validate, addr 0x1825a3120, size 0x1c0, virtual false, abstract: false, final false
inline void Validate(bool  allowMultipleCallsPerFrame, int32_t  id) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& __cordl_internal_get__LastFrame() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& __cordl_internal_get__LastFrame() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get__QueryPosition() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get__QueryPosition() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get__QueryResult() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get__QueryResult() ;

constexpr void __cordl_internal_set__LastFrame(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value) ;

constexpr void __cordl_internal_set__QueryPosition(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set__QueryResult(::ArrayW<::UnityEngine::Vector3>  value) ;

/// @brief Method .ctor, addr 0x1825a32e0, size 0x90, virtual false, abstract: false, final false
inline void _ctor(int32_t  queryCount) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SampleHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SampleHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SampleHelper(SampleHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SampleHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SampleHelper(SampleHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16758};

/// @brief Field _QueryPosition, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ____QueryPosition;

/// @brief Field _QueryResult, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ____QueryResult;

/// @brief Field _LastFrame, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  ____LastFrame;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::Internal::SampleHelper, ____QueryPosition) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Internal::SampleHelper, ____QueryResult) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Internal::SampleHelper, ____LastFrame) == 0x20, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::Internal::SampleHelper) == 0x28, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest::Internal
