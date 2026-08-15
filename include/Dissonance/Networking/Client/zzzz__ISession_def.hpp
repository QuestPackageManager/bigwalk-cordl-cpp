#pragma once
// IWYU pragma private; include "Dissonance/Networking/Client/ISession.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ISession)
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Dissonance::Networking::Client {
class ISession;
}
// Write type traits
MARK_REF_T(::Dissonance::Networking::Client::ISession*);
DEFINE_IL2CPP_CLASS(::Dissonance::Networking::Client::ISession*, "Dissonance.Networking.Client", "ISession");
// Dependencies 
namespace Dissonance::Networking::Client {
// Is value type: false
// CS Name: Dissonance.Networking.Client.ISession
class CORDL_TYPE ISession {
public:
// Declarations
 __declspec(property(get=get_LocalId)) ::System::Nullable_1<uint16_t>  LocalId;

 __declspec(property(get=get_LocalName)) ::StringW  LocalName;

 __declspec(property(get=get_SessionId)) uint32_t  SessionId;

/// @brief Method get_LocalId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Nullable_1<uint16_t> get_LocalId() ;

/// @brief Method get_LocalName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_LocalName() ;

/// @brief Method get_SessionId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline uint32_t get_SessionId() ;

// Ctor Parameters [CppParam { name: "", ty: "ISession", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISession(ISession const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16908};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Networking::Client
