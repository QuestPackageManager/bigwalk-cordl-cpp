#pragma once
// IWYU pragma private; include "Mirror/NetworkAnimator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "UnityEngine/zzzz__AnimatorControllerParameter_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkAnimator)
namespace Mirror {
class NetworkBehaviour;
}
namespace Mirror {
class NetworkConnectionToClient;
}
namespace Mirror {
class NetworkReader;
}
namespace Mirror {
class NetworkWriter;
}
namespace UnityEngine {
class AnimatorControllerParameter;
}
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace Mirror {
class NetworkAnimator;
}
// Write type traits
MARK_REF_T(::Mirror::NetworkAnimator*);
DEFINE_IL2CPP_CLASS(::Mirror::NetworkAnimator*, "Mirror", "NetworkAnimator");
// Dependencies Mirror.NetworkBehaviour, UnityEngine.AnimatorControllerParameter
namespace Mirror {
// Is value type: false
// CS Name: Mirror.NetworkAnimator
class CORDL_TYPE NetworkAnimator : public ::Mirror::NetworkBehaviour {
public:
// Declarations
 __declspec(property(get=get_NetworkanimatorSpeed, put=set_NetworkanimatorSpeed)) float_t  NetworkanimatorSpeed;

 __declspec(property(get=get_SendMessagesAllowed)) bool  SendMessagesAllowed;

/// @brief Field animationHash, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_animationHash, put=__cordl_internal_set_animationHash)) ::ArrayW<int32_t>  animationHash;

/// @brief Field animator, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_animator, put=__cordl_internal_set_animator)) ::UnityW<::UnityEngine::Animator>  animator;

/// @brief Field animatorSpeed, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_animatorSpeed, put=__cordl_internal_set_animatorSpeed)) float_t  animatorSpeed;

/// @brief Field clientAuthority, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_clientAuthority, put=__cordl_internal_set_clientAuthority)) bool  clientAuthority;

/// @brief Field lastBoolParameters, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastBoolParameters, put=__cordl_internal_set_lastBoolParameters)) ::ArrayW<bool>  lastBoolParameters;

/// @brief Field lastFloatParameters, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastFloatParameters, put=__cordl_internal_set_lastFloatParameters)) ::ArrayW<float_t>  lastFloatParameters;

/// @brief Field lastIntParameters, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastIntParameters, put=__cordl_internal_set_lastIntParameters)) ::ArrayW<int32_t>  lastIntParameters;

/// @brief Field layerWeight, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_layerWeight, put=__cordl_internal_set_layerWeight)) ::ArrayW<float_t>  layerWeight;

/// @brief Field nextSendTime, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextSendTime, put=__cordl_internal_set_nextSendTime)) double_t  nextSendTime;

/// @brief Field parameters, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_parameters, put=__cordl_internal_set_parameters)) ::ArrayW<::UnityEngine::AnimatorControllerParameter*>  parameters;

/// @brief Field previousSpeed, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_previousSpeed, put=__cordl_internal_set_previousSpeed)) float_t  previousSpeed;

/// @brief Field transitionHash, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_transitionHash, put=__cordl_internal_set_transitionHash)) ::ArrayW<int32_t>  transitionHash;

/// @brief Method Awake, addr 0x181519530, size 0x1e0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckAnimStateChanged, addr 0x181519710, size 0x200, virtual false, abstract: false, final false
inline bool CheckAnimStateChanged(::by_ref<int32_t>  stateHash, ::by_ref<float_t>  normalizedTime, int32_t  layerId) ;

/// @brief Method CheckSendRate, addr 0x181519910, size 0x260, virtual false, abstract: false, final false
inline void CheckSendRate() ;

/// @brief Method CheckSpeed, addr 0x181519b70, size 0x140, virtual false, abstract: false, final false
inline void CheckSpeed() ;

/// @brief Method CmdOnAnimationParametersServerMessage, addr 0x181519cb0, size 0xc0, virtual false, abstract: false, final false
inline void CmdOnAnimationParametersServerMessage(::ArrayW<uint8_t>  parameters) ;

/// @brief Method CmdOnAnimationResetTriggerServerMessage, addr 0x181519d70, size 0xc0, virtual false, abstract: false, final false
inline void CmdOnAnimationResetTriggerServerMessage(int32_t  hash) ;

/// @brief Method CmdOnAnimationServerMessage, addr 0x181519e30, size 0x120, virtual false, abstract: false, final false
inline void CmdOnAnimationServerMessage(int32_t  stateHash, float_t  normalizedTime, int32_t  layerId, float_t  weight, ::ArrayW<uint8_t>  parameters) ;

/// @brief Method CmdOnAnimationTriggerServerMessage, addr 0x181519f50, size 0xc0, virtual false, abstract: false, final false
inline void CmdOnAnimationTriggerServerMessage(int32_t  hash) ;

/// @brief Method CmdSetAnimatorSpeed, addr 0x18151a010, size 0xc0, virtual false, abstract: false, final false
inline void CmdSetAnimatorSpeed(float_t  newSpeed) ;

/// @brief Method DeserializeSyncVars, addr 0x18151a0d0, size 0xe0, virtual true, abstract: false, final false
inline void DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState) ;

/// @brief Method FixedUpdate, addr 0x18151a1b0, size 0x300, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method HandleAnimMsg, addr 0x18151a4b0, size 0xb0, virtual false, abstract: false, final false
inline void HandleAnimMsg(int32_t  stateHash, float_t  normalizedTime, int32_t  layerId, float_t  weight, ::Mirror::NetworkReader*  reader) ;

/// @brief Method HandleAnimParamsMsg, addr 0x18151a560, size 0x40, virtual false, abstract: false, final false
inline void HandleAnimParamsMsg(::Mirror::NetworkReader*  reader) ;

/// @brief Method HandleAnimResetTriggerMsg, addr 0x18151a5a0, size 0x50, virtual false, abstract: false, final false
inline void HandleAnimResetTriggerMsg(int32_t  hash) ;

/// @brief Method HandleAnimTriggerMsg, addr 0x18151a5f0, size 0x50, virtual false, abstract: false, final false
inline void HandleAnimTriggerMsg(int32_t  hash) ;

/// @brief Method InvokeUserCode_CmdOnAnimationParametersServerMessage__Byte[], addr 0x18151a640, size 0xf0, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdOnAnimationParametersServerMessage__Byte__(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdOnAnimationResetTriggerServerMessage__Int32, addr 0x18151a730, size 0x110, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdOnAnimationResetTriggerServerMessage__Int32(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdOnAnimationServerMessage__Int32__Single__Int32__Single__Byte[], addr 0x18151a840, size 0x170, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdOnAnimationServerMessage__Int32__Single__Int32__Single__Byte__(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdOnAnimationTriggerServerMessage__Int32, addr 0x18151a9b0, size 0x110, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdOnAnimationTriggerServerMessage__Int32(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_CmdSetAnimatorSpeed__Single, addr 0x18151aac0, size 0x130, virtual false, abstract: false, final false
static inline void InvokeUserCode_CmdSetAnimatorSpeed__Single(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_RpcOnAnimationClientMessage__Int32__Single__Int32__Single__Byte[], addr 0x18151abf0, size 0x150, virtual false, abstract: false, final false
static inline void InvokeUserCode_RpcOnAnimationClientMessage__Int32__Single__Int32__Single__Byte__(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_RpcOnAnimationParametersClientMessage__Byte[], addr 0x18151ad40, size 0xd0, virtual false, abstract: false, final false
static inline void InvokeUserCode_RpcOnAnimationParametersClientMessage__Byte__(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_RpcOnAnimationResetTriggerClientMessage__Int32, addr 0x18151ae10, size 0xe0, virtual false, abstract: false, final false
static inline void InvokeUserCode_RpcOnAnimationResetTriggerClientMessage__Int32(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method InvokeUserCode_RpcOnAnimationTriggerClientMessage__Int32, addr 0x18151aef0, size 0xe0, virtual false, abstract: false, final false
static inline void InvokeUserCode_RpcOnAnimationTriggerClientMessage__Int32(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection) ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::Mirror::NetworkAnimator* New_ctor() ;

/// @brief Method NextDirtyBits, addr 0x18151afd0, size 0x1f0, virtual false, abstract: false, final false
inline uint64_t NextDirtyBits() ;

/// @brief Method OnAnimatorSpeedChanged, addr 0x18151b1c0, size 0x60, virtual false, abstract: false, final false
inline void OnAnimatorSpeedChanged(float_t  _, float_t  value) ;

/// @brief Method OnDeserialize, addr 0x18151b220, size 0x100, virtual true, abstract: false, final false
inline void OnDeserialize(::Mirror::NetworkReader*  reader, bool  initialState) ;

/// @brief Method OnSerialize, addr 0x18151b320, size 0x1b0, virtual true, abstract: false, final false
inline void OnSerialize(::Mirror::NetworkWriter*  writer, bool  initialState) ;

/// @brief Method ReadParameters, addr 0x18151b4d0, size 0x1d0, virtual false, abstract: false, final false
inline void ReadParameters(::Mirror::NetworkReader*  reader) ;

/// @brief Method ResetTrigger, addr 0x18151b6a0, size 0x1b0, virtual false, abstract: false, final false
inline void ResetTrigger(int32_t  hash) ;

/// @brief Method ResetTrigger, addr 0x18151b850, size 0x30, virtual false, abstract: false, final false
inline void ResetTrigger(::StringW  triggerName) ;

/// @brief Method RpcOnAnimationClientMessage, addr 0x18151b880, size 0x120, virtual false, abstract: false, final false
inline void RpcOnAnimationClientMessage(int32_t  stateHash, float_t  normalizedTime, int32_t  layerId, float_t  weight, ::ArrayW<uint8_t>  parameters) ;

/// @brief Method RpcOnAnimationParametersClientMessage, addr 0x18151b9a0, size 0xc0, virtual false, abstract: false, final false
inline void RpcOnAnimationParametersClientMessage(::ArrayW<uint8_t>  parameters) ;

/// @brief Method RpcOnAnimationResetTriggerClientMessage, addr 0x18151ba60, size 0xc0, virtual false, abstract: false, final false
inline void RpcOnAnimationResetTriggerClientMessage(int32_t  hash) ;

/// @brief Method RpcOnAnimationTriggerClientMessage, addr 0x18151bb20, size 0xc0, virtual false, abstract: false, final false
inline void RpcOnAnimationTriggerClientMessage(int32_t  hash) ;

/// @brief Method SendAnimationMessage, addr 0x18151bbe0, size 0x170, virtual false, abstract: false, final false
inline void SendAnimationMessage(int32_t  stateHash, float_t  normalizedTime, int32_t  layerId, float_t  weight, ::ArrayW<uint8_t>  parameters) ;

/// @brief Method SendAnimationParametersMessage, addr 0x18151bd50, size 0x100, virtual false, abstract: false, final false
inline void SendAnimationParametersMessage(::ArrayW<uint8_t>  parameters) ;

/// @brief Method SerializeSyncVars, addr 0x18151be50, size 0x50, virtual true, abstract: false, final false
inline void SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll) ;

/// @brief Method SetTrigger, addr 0x18151bea0, size 0x1b0, virtual false, abstract: false, final false
inline void SetTrigger(int32_t  hash) ;

/// @brief Method SetTrigger, addr 0x18151c050, size 0x30, virtual false, abstract: false, final false
inline void SetTrigger(::StringW  triggerName) ;

/// @brief Method UserCode_CmdOnAnimationParametersServerMessage__Byte[], addr 0x18151c0c0, size 0xd0, virtual false, abstract: false, final false
inline void UserCode_CmdOnAnimationParametersServerMessage__Byte__(::ArrayW<uint8_t>  parameters) ;

/// @brief Method UserCode_CmdOnAnimationResetTriggerServerMessage__Int32, addr 0x18151c190, size 0x80, virtual false, abstract: false, final false
inline void UserCode_CmdOnAnimationResetTriggerServerMessage__Int32(int32_t  hash) ;

/// @brief Method UserCode_CmdOnAnimationServerMessage__Int32__Single__Int32__Single__Byte[], addr 0x18151c210, size 0x130, virtual false, abstract: false, final false
inline void UserCode_CmdOnAnimationServerMessage__Int32__Single__Int32__Single__Byte__(int32_t  stateHash, float_t  normalizedTime, int32_t  layerId, float_t  weight, ::ArrayW<uint8_t>  parameters) ;

/// @brief Method UserCode_CmdOnAnimationTriggerServerMessage__Int32, addr 0x18151c340, size 0x80, virtual false, abstract: false, final false
inline void UserCode_CmdOnAnimationTriggerServerMessage__Int32(int32_t  hash) ;

/// @brief Method UserCode_CmdSetAnimatorSpeed__Single, addr 0x18151c3c0, size 0x90, virtual false, abstract: false, final false
inline void UserCode_CmdSetAnimatorSpeed__Single(float_t  newSpeed) ;

/// @brief Method UserCode_RpcOnAnimationClientMessage__Int32__Single__Int32__Single__Byte[], addr 0x18151c450, size 0xe0, virtual false, abstract: false, final false
inline void UserCode_RpcOnAnimationClientMessage__Int32__Single__Int32__Single__Byte__(int32_t  stateHash, float_t  normalizedTime, int32_t  layerId, float_t  weight, ::ArrayW<uint8_t>  parameters) ;

/// @brief Method UserCode_RpcOnAnimationParametersClientMessage__Byte[], addr 0x18151c530, size 0xb0, virtual false, abstract: false, final false
inline void UserCode_RpcOnAnimationParametersClientMessage__Byte__(::ArrayW<uint8_t>  parameters) ;

/// @brief Method UserCode_RpcOnAnimationResetTriggerClientMessage__Int32, addr 0x18151c5e0, size 0x70, virtual false, abstract: false, final false
inline void UserCode_RpcOnAnimationResetTriggerClientMessage__Int32(int32_t  hash) ;

/// @brief Method UserCode_RpcOnAnimationTriggerClientMessage__Int32, addr 0x18151c650, size 0x70, virtual false, abstract: false, final false
inline void UserCode_RpcOnAnimationTriggerClientMessage__Int32(int32_t  hash) ;

/// @brief Method WriteParameters, addr 0x18151c6c0, size 0x1a0, virtual false, abstract: false, final false
inline bool WriteParameters(::Mirror::NetworkWriter*  writer, bool  forceAll) ;

/// @brief Method <Awake>b__14_0, addr 0x18151c080, size 0x40, virtual false, abstract: false, final false
inline bool _Awake_b__14_0(::UnityEngine::AnimatorControllerParameter*  par) ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_animationHash() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_animationHash() ;

constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_animator() const;

constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_animator() ;

constexpr float_t const& __cordl_internal_get_animatorSpeed() const;

constexpr float_t& __cordl_internal_get_animatorSpeed() ;

constexpr bool const& __cordl_internal_get_clientAuthority() const;

constexpr bool& __cordl_internal_get_clientAuthority() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_lastBoolParameters() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_lastBoolParameters() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_lastFloatParameters() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_lastFloatParameters() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_lastIntParameters() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_lastIntParameters() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_layerWeight() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_layerWeight() ;

constexpr double_t const& __cordl_internal_get_nextSendTime() const;

constexpr double_t& __cordl_internal_get_nextSendTime() ;

constexpr ::ArrayW<::UnityEngine::AnimatorControllerParameter*> const& __cordl_internal_get_parameters() const;

constexpr ::ArrayW<::UnityEngine::AnimatorControllerParameter*>& __cordl_internal_get_parameters() ;

constexpr float_t const& __cordl_internal_get_previousSpeed() const;

constexpr float_t& __cordl_internal_get_previousSpeed() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_transitionHash() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_transitionHash() ;

constexpr void __cordl_internal_set_animationHash(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_animator(::UnityW<::UnityEngine::Animator>  value) ;

constexpr void __cordl_internal_set_animatorSpeed(float_t  value) ;

constexpr void __cordl_internal_set_clientAuthority(bool  value) ;

constexpr void __cordl_internal_set_lastBoolParameters(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set_lastFloatParameters(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_lastIntParameters(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_layerWeight(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_nextSendTime(double_t  value) ;

constexpr void __cordl_internal_set_parameters(::ArrayW<::UnityEngine::AnimatorControllerParameter*>  value) ;

constexpr void __cordl_internal_set_previousSpeed(float_t  value) ;

constexpr void __cordl_internal_set_transitionHash(::ArrayW<int32_t>  value) ;

/// @brief Method .ctor, addr 0x180360450, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_NetworkanimatorSpeed, addr 0x180403860, size 0x10, virtual false, abstract: false, final false
inline float_t get_NetworkanimatorSpeed() ;

/// @brief Method get_SendMessagesAllowed, addr 0x18151cb30, size 0x70, virtual false, abstract: false, final false
inline bool get_SendMessagesAllowed() ;

/// @brief Method set_NetworkanimatorSpeed, addr 0x18151cba0, size 0x70, virtual false, abstract: false, final false
inline void set_NetworkanimatorSpeed(::ByRefConst<float_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkAnimator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkAnimator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkAnimator(NetworkAnimator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkAnimator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkAnimator(NetworkAnimator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19235};

/// @brief Field clientAuthority, offset: 0x68, size: 0x1, def value: None
 bool  ___clientAuthority;

/// @brief Field animator, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animator>  ___animator;

/// @brief Field animatorSpeed, offset: 0x78, size: 0x4, def value: None
 float_t  ___animatorSpeed;

/// @brief Field previousSpeed, offset: 0x7c, size: 0x4, def value: None
 float_t  ___previousSpeed;

/// @brief Field lastIntParameters, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___lastIntParameters;

/// @brief Field lastFloatParameters, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<float_t>  ___lastFloatParameters;

/// @brief Field lastBoolParameters, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<bool>  ___lastBoolParameters;

/// @brief Field parameters, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::AnimatorControllerParameter*>  ___parameters;

/// @brief Field animationHash, offset: 0xa0, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___animationHash;

/// @brief Field transitionHash, offset: 0xa8, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___transitionHash;

/// @brief Field layerWeight, offset: 0xb0, size: 0x8, def value: None
 ::ArrayW<float_t>  ___layerWeight;

/// @brief Field nextSendTime, offset: 0xb8, size: 0x8, def value: None
 double_t  ___nextSendTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::NetworkAnimator, ___clientAuthority) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkAnimator, ___animator) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkAnimator, ___animatorSpeed) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkAnimator, ___previousSpeed) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkAnimator, ___lastIntParameters) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkAnimator, ___lastFloatParameters) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkAnimator, ___lastBoolParameters) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkAnimator, ___parameters) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkAnimator, ___animationHash) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkAnimator, ___transitionHash) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkAnimator, ___layerWeight) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Mirror::NetworkAnimator, ___nextSendTime) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::Mirror::NetworkAnimator) == 0xc0, "Size mismatch!");

} // namespace end def Mirror
