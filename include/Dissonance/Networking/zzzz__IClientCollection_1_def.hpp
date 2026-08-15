#pragma once
// IWYU pragma private; include "Dissonance/Networking/IClientCollection_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IClientCollection_1)
namespace Dissonance::Networking {
template<typename TPeer>
class ClientInfo_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Dissonance::Networking {
template<typename TPeer>
class IClientCollection_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Dissonance::Networking::IClientCollection_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Dissonance::Networking::IClientCollection_1, "Dissonance.Networking", "IClientCollection`1");
// Dependencies 
namespace Dissonance::Networking {
// cpp template
template<typename TPeer>
// Is value type: false
// CS Name: Dissonance.Networking.IClientCollection`1<TPeer>
class CORDL_TYPE IClientCollection_1 {
public:
// Declarations
/// @brief Method TryGetClientInfoById, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool TryGetClientInfoById(uint16_t  clientId, ::by_ref<::Dissonance::Networking::ClientInfo_1<TPeer>*>  info) ;

/// @brief Method TryGetClientInfoByName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool TryGetClientInfoByName(::StringW  clientName, ::by_ref<::Dissonance::Networking::ClientInfo_1<TPeer>*>  info) ;

/// @brief Method TryGetClientsInRoom, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool TryGetClientsInRoom(::StringW  room, ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*  output) ;

/// @brief Method TryGetClientsInRoom, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool TryGetClientsInRoom(uint16_t  roomId, ::System::Collections::Generic::List_1<::Dissonance::Networking::ClientInfo_1<TPeer>*>*  output) ;

// Ctor Parameters [CppParam { name: "", ty: "IClientCollection_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IClientCollection_1(IClientCollection_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16866};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Dissonance::Networking
