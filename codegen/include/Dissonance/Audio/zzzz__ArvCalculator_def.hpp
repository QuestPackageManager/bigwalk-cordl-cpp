#pragma once
// IWYU pragma private; include "Dissonance/Audio/ArvCalculator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(ArvCalculator)
namespace System {
template<typename T>
struct ArraySegment_1;
}
// Forward declare root types
namespace Dissonance::Audio {
struct ArvCalculator;
}
// Write type traits
MARK_VAL_T(::Dissonance::Audio::ArvCalculator);
DEFINE_IL2CPP_CLASS(::Dissonance::Audio::ArvCalculator, "Dissonance.Audio", "ArvCalculator");
// Dependencies 
namespace Dissonance::Audio {
// Is value type: true
// CS Name: Dissonance.Audio.ArvCalculator
struct CORDL_TYPE ArvCalculator {
public:
// Declarations
 __declspec(property(get=get_ARV, put=set_ARV)) float_t  ARV;

/// @brief Method Reset, addr 0x1805d77b0, size 0x20, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Update, addr 0x1805d77d0, size 0x90, virtual false, abstract: false, final false
inline void Update(::System::ArraySegment_1<float_t>  samples) ;

/// @brief Method get_ARV, addr 0x1802d56c0, size 0x10, virtual false, abstract: false, final false
inline float_t get_ARV() ;

/// @brief Method set_ARV, addr 0x18051eac0, size 0x10, virtual false, abstract: false, final false
inline void set_ARV(float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ArvCalculator() ;

// Ctor Parameters [CppParam { name: "_ARV_k__BackingField", ty: "float_t", modifiers: "", def_value: None }]
constexpr ArvCalculator(float_t  _ARV_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16955};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field <ARV>k__BackingField, offset: 0x0, size: 0x4, def value: None
 float_t  _ARV_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Dissonance::Audio::ArvCalculator, _ARV_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Dissonance::Audio::ArvCalculator) == 0x4, "Size mismatch!");

} // namespace end def Dissonance::Audio
