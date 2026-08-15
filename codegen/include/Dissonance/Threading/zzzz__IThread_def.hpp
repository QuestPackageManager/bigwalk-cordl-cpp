#pragma once
// IWYU pragma private; include "Dissonance/Threading/IThread.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IThread)
// Forward declare root types
namespace Dissonance::Threading {
class IThread;
}
// Write type traits
MARK_REF_T(::Dissonance::Threading::IThread*);
DEFINE_IL2CPP_CLASS(::Dissonance::Threading::IThread*, "Dissonance.Threading", "IThread");
// Dependencies 
namespace Dissonance::Threading {
// Is value type: false
// CS Name: Dissonance.Threading.IThread
class CORDL_TYPE IThread {
public:
// Declarations
 __declspec(property(get=get_IsStarted)) bool  IsStarted;

/// @brief Method Join, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Join() ;

/// @brief Method Start, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method get_IsStarted, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_IsStarted() ;

// Ctor Parameters [CppParam { name: "", ty: "IThread", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IThread(IThread const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16857};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Threading
