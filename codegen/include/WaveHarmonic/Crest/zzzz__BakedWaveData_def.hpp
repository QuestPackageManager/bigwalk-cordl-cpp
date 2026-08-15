#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/BakedWaveData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/Internal/zzzz__CustomScriptableObject_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BakedWaveData)
namespace WaveHarmonic::Crest {
class ICollisionProvider;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class BakedWaveData;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::BakedWaveData*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::BakedWaveData*, "WaveHarmonic.Crest", "BakedWaveData");
// Dependencies WaveHarmonic.Crest.Internal.CustomScriptableObject
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.BakedWaveData
class CORDL_TYPE BakedWaveData : public ::WaveHarmonic::Crest::Internal::CustomScriptableObject {
public:
// Declarations
 __declspec(property(get=get_WindSpeed)) float_t  WindSpeed;

/// @brief Method CreateCollisionProvider, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::WaveHarmonic::Crest::ICollisionProvider* CreateCollisionProvider() ;

static inline ::WaveHarmonic::Crest::BakedWaveData* New_ctor() ;

/// @brief Method .ctor, addr 0x182552740, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_WindSpeed, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_WindSpeed() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BakedWaveData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BakedWaveData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BakedWaveData(BakedWaveData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BakedWaveData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BakedWaveData(BakedWaveData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16475};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::BakedWaveData) == 0x20, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
