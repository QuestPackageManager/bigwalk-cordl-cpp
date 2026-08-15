#pragma once
// IWYU pragma private; include "Mirror/Discovery/ServerFoundUnityEvent_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
CORDL_MODULE_EXPORT(ServerFoundUnityEvent_1)
// Forward declare root types
namespace Mirror::Discovery {
template<typename TResponseType>
class ServerFoundUnityEvent_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Mirror::Discovery::ServerFoundUnityEvent_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Mirror::Discovery::ServerFoundUnityEvent_1, "Mirror.Discovery", "ServerFoundUnityEvent`1");
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace Mirror::Discovery {
// cpp template
template<typename TResponseType>
// Is value type: false
// CS Name: Mirror.Discovery.ServerFoundUnityEvent`1<TResponseType>
class CORDL_TYPE ServerFoundUnityEvent_1 : public ::UnityEngine::Events::UnityEvent_1<TResponseType> {
public:
// Declarations
static inline ::Mirror::Discovery::ServerFoundUnityEvent_1<TResponseType>* New_ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ServerFoundUnityEvent_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ServerFoundUnityEvent_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ServerFoundUnityEvent_1(ServerFoundUnityEvent_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ServerFoundUnityEvent_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ServerFoundUnityEvent_1(ServerFoundUnityEvent_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19256};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mirror::Discovery
