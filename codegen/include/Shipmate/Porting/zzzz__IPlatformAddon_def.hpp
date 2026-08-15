#pragma once
// IWYU pragma private; include "Shipmate/Porting/IPlatformAddon.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPlatformAddon)
namespace Shipmate::Porting {
template<typename T>
class AbstractPlatformManager_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Shipmate::Porting {
class IPlatformAddon;
}
// Write type traits
MARK_REF_T(::Shipmate::Porting::IPlatformAddon*);
DEFINE_IL2CPP_CLASS(::Shipmate::Porting::IPlatformAddon*, "Shipmate.Porting", "IPlatformAddon");
// Dependencies 
namespace Shipmate::Porting {
// Is value type: false
// CS Name: Shipmate.Porting.IPlatformAddon
class CORDL_TYPE IPlatformAddon {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Initialize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename T>
inline void Initialize(::Shipmate::Porting::AbstractPlatformManager_1<T>*  aManager) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IPlatformAddon", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPlatformAddon(IPlatformAddon const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20616};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Shipmate::Porting
