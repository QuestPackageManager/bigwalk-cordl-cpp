#pragma once
// IWYU pragma private; include "LobbyNetworking/TicketOffice.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TicketOffice)
namespace LobbyNetworking {
class ITicketed;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace LobbyNetworking {
class TicketOffice;
}
// Write type traits
MARK_REF_T(::LobbyNetworking::TicketOffice*);
DEFINE_IL2CPP_CLASS(::LobbyNetworking::TicketOffice*, "LobbyNetworking", "TicketOffice");
// Dependencies UnityEngine.MonoBehaviour
namespace LobbyNetworking {
// Is value type: false
// CS Name: LobbyNetworking.TicketOffice
class CORDL_TYPE TicketOffice : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::LobbyNetworking::TicketOffice>  instance;

/// @brief Field tickets, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_tickets, put=__cordl_internal_set_tickets)) ::System::Collections::Generic::Dictionary_2<uint16_t,::LobbyNetworking::ITicketed*>*  tickets;

/// @brief Method AddTicket, addr 0x1803d0c80, size 0x1f0, virtual false, abstract: false, final false
static inline void AddTicket(::LobbyNetworking::ITicketed*  ticketed) ;

/// @brief Method GetWithTicket, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T GetWithTicket(uint16_t  ticket) ;

/// @brief Method Initialize, addr 0x1803d0e70, size 0xf0, virtual false, abstract: false, final false
static inline void Initialize() ;

static inline ::LobbyNetworking::TicketOffice* New_ctor() ;

/// @brief Method RemoveTicket, addr 0x1803d0f60, size 0xa0, virtual false, abstract: false, final false
static inline void RemoveTicket(::LobbyNetworking::ITicketed*  ticketed) ;

constexpr ::System::Collections::Generic::Dictionary_2<uint16_t,::LobbyNetworking::ITicketed*>* const& __cordl_internal_get_tickets() const;

constexpr ::System::Collections::Generic::Dictionary_2<uint16_t,::LobbyNetworking::ITicketed*>*& __cordl_internal_get_tickets() ;

constexpr void __cordl_internal_set_tickets(::System::Collections::Generic::Dictionary_2<uint16_t,::LobbyNetworking::ITicketed*>*  value) ;

/// @brief Method .ctor, addr 0x1802dd7c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::LobbyNetworking::TicketOffice> getStaticF_instance() ;

static inline void setStaticF_instance(::UnityW<::LobbyNetworking::TicketOffice>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TicketOffice() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TicketOffice", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TicketOffice(TicketOffice && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TicketOffice", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TicketOffice(TicketOffice const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5763};

/// @brief Field tickets, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<uint16_t,::LobbyNetworking::ITicketed*>*  ___tickets;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::LobbyNetworking::TicketOffice, ___tickets) == 0x20, "Offset mismatch!");

static_assert(sizeof(::LobbyNetworking::TicketOffice) == 0x28, "Size mismatch!");

} // namespace end def LobbyNetworking
