#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/DefaultTimeProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DefaultTimeProvider)
namespace WaveHarmonic::Crest {
class ITimeProvider;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class DefaultTimeProvider;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::DefaultTimeProvider*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::DefaultTimeProvider*, "WaveHarmonic.Crest", "DefaultTimeProvider");
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.DefaultTimeProvider
class CORDL_TYPE DefaultTimeProvider : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Delta)) float_t  Delta;

 __declspec(property(get=get_Time)) float_t  Time;

/// @brief Convert operator to "::WaveHarmonic::Crest::ITimeProvider"
constexpr operator  ::WaveHarmonic::Crest::ITimeProvider*() noexcept;

static inline ::WaveHarmonic::Crest::DefaultTimeProvider* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Delta, addr 0x182127910, size 0x10, virtual true, abstract: false, final true
inline float_t get_Delta() ;

/// @brief Method get_Time, addr 0x18259f5c0, size 0x10, virtual true, abstract: false, final true
inline float_t get_Time() ;

/// @brief Convert to "::WaveHarmonic::Crest::ITimeProvider"
constexpr ::WaveHarmonic::Crest::ITimeProvider* i___WaveHarmonic__Crest__ITimeProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DefaultTimeProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DefaultTimeProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DefaultTimeProvider(DefaultTimeProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DefaultTimeProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DefaultTimeProvider(DefaultTimeProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16698};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::DefaultTimeProvider) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
