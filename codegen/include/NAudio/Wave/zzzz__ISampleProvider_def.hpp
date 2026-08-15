#pragma once
// IWYU pragma private; include "NAudio/Wave/ISampleProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ISampleProvider)
namespace NAudio::Wave {
class WaveFormat;
}
// Forward declare root types
namespace NAudio::Wave {
class ISampleProvider;
}
// Write type traits
MARK_REF_T(::NAudio::Wave::ISampleProvider*);
DEFINE_IL2CPP_CLASS(::NAudio::Wave::ISampleProvider*, "NAudio.Wave", "ISampleProvider");
// Dependencies 
namespace NAudio::Wave {
// Is value type: false
// CS Name: NAudio.Wave.ISampleProvider
class CORDL_TYPE ISampleProvider {
public:
// Declarations
 __declspec(property(get=get_WaveFormat)) ::NAudio::Wave::WaveFormat*  WaveFormat;

/// @brief Method Read, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<float_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method get_WaveFormat, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::NAudio::Wave::WaveFormat* get_WaveFormat() ;

// Ctor Parameters [CppParam { name: "", ty: "ISampleProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISampleProvider(ISampleProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16771};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def NAudio::Wave
