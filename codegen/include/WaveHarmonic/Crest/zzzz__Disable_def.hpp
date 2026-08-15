#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Disable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/zzzz__Decorator_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Disable)
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace WaveHarmonic::Crest {
struct RenderPipeline;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class Disable;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::Disable*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Disable*, "WaveHarmonic.Crest", "Disable");
// Dependencies WaveHarmonic.Crest.Decorator
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Disable
class CORDL_TYPE Disable : public ::WaveHarmonic::Crest::Decorator {
public:
// Declarations
static inline ::WaveHarmonic::Crest::Disable* New_ctor(::StringW  property) ;

static inline ::WaveHarmonic::Crest::Disable* New_ctor(::StringW  property, ::System::Object*  value) ;

static inline ::WaveHarmonic::Crest::Disable* New_ctor(::WaveHarmonic::Crest::RenderPipeline  rp) ;

static inline ::WaveHarmonic::Crest::Disable* New_ctor(::System::Type*  type) ;

static inline ::WaveHarmonic::Crest::Disable* New_ctor(::System::Type*  type, ::StringW  member) ;

static inline ::WaveHarmonic::Crest::Disable* New_ctor(::System::Type*  type, ::StringW  member, ::System::Object*  value) ;

/// @brief Method .ctor, addr 0x180303f60, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor(::StringW  property) ;

/// @brief Method .ctor, addr 0x180303f60, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor(::StringW  property, ::System::Object*  value) ;

/// @brief Method .ctor, addr 0x180303f60, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor(::WaveHarmonic::Crest::RenderPipeline  rp) ;

/// @brief Method .ctor, addr 0x180303f60, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  type) ;

/// @brief Method .ctor, addr 0x180303f60, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  type, ::StringW  member) ;

/// @brief Method .ctor, addr 0x180303f60, size 0x1d0, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  type, ::StringW  member, ::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Disable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Disable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Disable(Disable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Disable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Disable(Disable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20116};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::Disable) == 0x18, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
