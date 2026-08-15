#pragma once
// IWYU pragma private; include "Mirror/NetworkAnimator.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "UnityEngine/zzzz__AnimatorControllerParameter_impl.hpp"
#include "Mirror/zzzz__NetworkAnimator_def.hpp"
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "Mirror/zzzz__NetworkConnectionToClient_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
#include "UnityEngine/zzzz__AnimatorControllerParameter_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
//  Writing Method size for method: ::Mirror::NetworkAnimator.get_SendMessagesAllowed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::NetworkAnimator::*)()>(&::Mirror::NetworkAnimator::get_SendMessagesAllowed)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18151cb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"get_SendMessagesAllowed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAnimator::*)()>(&::Mirror::NetworkAnimator::Awake)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x181519530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAnimator::*)()>(&::Mirror::NetworkAnimator::FixedUpdate)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x18151a1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.CheckSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAnimator::*)()>(&::Mirror::NetworkAnimator::CheckSpeed)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181519b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"CheckSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.OnAnimatorSpeedChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAnimator::*)(float_t, float_t)>(&::Mirror::NetworkAnimator::OnAnimatorSpeedChanged)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18151b1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"OnAnimatorSpeedChanged", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.CheckAnimStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::NetworkAnimator::*)(::by_ref<int32_t>, ::by_ref<float_t>, int32_t)>(&::Mirror::NetworkAnimator::CheckAnimStateChanged)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x181519710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"CheckAnimStateChanged", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.CheckSendRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAnimator::*)()>(&::Mirror::NetworkAnimator::CheckSendRate)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x181519910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"CheckSendRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.SendAnimationMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAnimator::*)(int32_t, float_t, int32_t, float_t, ::ArrayW<uint8_t>)>(&::Mirror::NetworkAnimator::SendAnimationMessage)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18151bbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"SendAnimationMessage", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.SendAnimationParametersMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAnimator::*)(::ArrayW<uint8_t>)>(&::Mirror::NetworkAnimator::SendAnimationParametersMessage)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18151bd50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"SendAnimationParametersMessage", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.HandleAnimMsg
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAnimator::*)(int32_t, float_t, int32_t, float_t, ::Mirror::NetworkReader*)>(&::Mirror::NetworkAnimator::HandleAnimMsg)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18151a4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"HandleAnimMsg", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.HandleAnimParamsMsg
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAnimator::*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkAnimator::HandleAnimParamsMsg)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18151a560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"HandleAnimParamsMsg", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.HandleAnimTriggerMsg
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAnimator::*)(int32_t)>(&::Mirror::NetworkAnimator::HandleAnimTriggerMsg)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18151a5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"HandleAnimTriggerMsg", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.HandleAnimResetTriggerMsg
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAnimator::*)(int32_t)>(&::Mirror::NetworkAnimator::HandleAnimResetTriggerMsg)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18151a5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"HandleAnimResetTriggerMsg", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.NextDirtyBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::Mirror::NetworkAnimator::*)()>(&::Mirror::NetworkAnimator::NextDirtyBits)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x18151afd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"NextDirtyBits", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.WriteParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::NetworkAnimator::*)(::Mirror::NetworkWriter*, bool)>(&::Mirror::NetworkAnimator::WriteParameters)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x18151c6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"WriteParameters", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.ReadParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAnimator::*)(::Mirror::NetworkReader*)>(&::Mirror::NetworkAnimator::ReadParameters)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x18151b4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"ReadParameters", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.OnSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAnimator::*)(::Mirror::NetworkWriter*, bool)>(&::Mirror::NetworkAnimator::OnSerialize)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x18151b320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                    {::i2c::class_of<::Mirror::NetworkAnimator*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.OnDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAnimator::*)(::Mirror::NetworkReader*, bool)>(&::Mirror::NetworkAnimator::OnDeserialize)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x18151b220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                    {::i2c::class_of<::Mirror::NetworkAnimator*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.SetTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAnimator::*)(::StringW)>(&::Mirror::NetworkAnimator::SetTrigger)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18151c050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"SetTrigger", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.SetTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAnimator::*)(int32_t)>(&::Mirror::NetworkAnimator::SetTrigger)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x18151bea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"SetTrigger", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.ResetTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAnimator::*)(::StringW)>(&::Mirror::NetworkAnimator::ResetTrigger)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18151b850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"ResetTrigger", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.ResetTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAnimator::*)(int32_t)>(&::Mirror::NetworkAnimator::ResetTrigger)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x18151b6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"ResetTrigger", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.CmdOnAnimationServerMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAnimator::*)(int32_t, float_t, int32_t, float_t, ::ArrayW<uint8_t>)>(&::Mirror::NetworkAnimator::CmdOnAnimationServerMessage)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181519e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"CmdOnAnimationServerMessage", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.CmdOnAnimationParametersServerMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAnimator::*)(::ArrayW<uint8_t>)>(&::Mirror::NetworkAnimator::CmdOnAnimationParametersServerMessage)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181519cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"CmdOnAnimationParametersServerMessage", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.CmdOnAnimationTriggerServerMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAnimator::*)(int32_t)>(&::Mirror::NetworkAnimator::CmdOnAnimationTriggerServerMessage)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181519f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"CmdOnAnimationTriggerServerMessage", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.CmdOnAnimationResetTriggerServerMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAnimator::*)(int32_t)>(&::Mirror::NetworkAnimator::CmdOnAnimationResetTriggerServerMessage)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181519d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"CmdOnAnimationResetTriggerServerMessage", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.CmdSetAnimatorSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAnimator::*)(float_t)>(&::Mirror::NetworkAnimator::CmdSetAnimatorSpeed)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18151a010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"CmdSetAnimatorSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.RpcOnAnimationClientMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAnimator::*)(int32_t, float_t, int32_t, float_t, ::ArrayW<uint8_t>)>(&::Mirror::NetworkAnimator::RpcOnAnimationClientMessage)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18151b880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"RpcOnAnimationClientMessage", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.RpcOnAnimationParametersClientMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAnimator::*)(::ArrayW<uint8_t>)>(&::Mirror::NetworkAnimator::RpcOnAnimationParametersClientMessage)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18151b9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"RpcOnAnimationParametersClientMessage", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.RpcOnAnimationTriggerClientMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAnimator::*)(int32_t)>(&::Mirror::NetworkAnimator::RpcOnAnimationTriggerClientMessage)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18151bb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"RpcOnAnimationTriggerClientMessage", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.RpcOnAnimationResetTriggerClientMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAnimator::*)(int32_t)>(&::Mirror::NetworkAnimator::RpcOnAnimationResetTriggerClientMessage)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18151ba60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"RpcOnAnimationResetTriggerClientMessage", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAnimator::*)()>(&::Mirror::NetworkAnimator::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180360450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator._Awake_b__14_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Mirror::NetworkAnimator::*)(::UnityEngine::AnimatorControllerParameter*)>(&::Mirror::NetworkAnimator::_Awake_b__14_0)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18151c080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"<Awake>b__14_0", {}, {::i2c::type_of<::UnityEngine::AnimatorControllerParameter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAnimator::*)()>(&::Mirror::NetworkAnimator::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.get_NetworkanimatorSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Mirror::NetworkAnimator::*)()>(&::Mirror::NetworkAnimator::get_NetworkanimatorSpeed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180403860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"get_NetworkanimatorSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.set_NetworkanimatorSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAnimator::*)(::ByRefConst<float_t>)>(&::Mirror::NetworkAnimator::set_NetworkanimatorSpeed)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18151cba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"set_NetworkanimatorSpeed", {}, {::i2c::type_of<::ByRefConst<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.UserCode_CmdOnAnimationServerMessage__Int32__Single__Int32__Single__Byte__
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAnimator::*)(int32_t, float_t, int32_t, float_t, ::ArrayW<uint8_t>)>(&::Mirror::NetworkAnimator::UserCode_CmdOnAnimationServerMessage__Int32__Single__Int32__Single__Byte__)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18151c210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"UserCode_CmdOnAnimationServerMessage__Int32__Single__Int32__Single__Byte[]", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.InvokeUserCode_CmdOnAnimationServerMessage__Int32__Single__Int32__Single__Byte__
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::Mirror::NetworkAnimator::InvokeUserCode_CmdOnAnimationServerMessage__Int32__Single__Int32__Single__Byte__)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18151a840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"InvokeUserCode_CmdOnAnimationServerMessage__Int32__Single__Int32__Single__Byte[]", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.UserCode_CmdOnAnimationParametersServerMessage__Byte__
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAnimator::*)(::ArrayW<uint8_t>)>(&::Mirror::NetworkAnimator::UserCode_CmdOnAnimationParametersServerMessage__Byte__)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18151c0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"UserCode_CmdOnAnimationParametersServerMessage__Byte[]", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.InvokeUserCode_CmdOnAnimationParametersServerMessage__Byte__
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::Mirror::NetworkAnimator::InvokeUserCode_CmdOnAnimationParametersServerMessage__Byte__)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18151a640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"InvokeUserCode_CmdOnAnimationParametersServerMessage__Byte[]", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.UserCode_CmdOnAnimationTriggerServerMessage__Int32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAnimator::*)(int32_t)>(&::Mirror::NetworkAnimator::UserCode_CmdOnAnimationTriggerServerMessage__Int32)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18151c340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"UserCode_CmdOnAnimationTriggerServerMessage__Int32", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.InvokeUserCode_CmdOnAnimationTriggerServerMessage__Int32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::Mirror::NetworkAnimator::InvokeUserCode_CmdOnAnimationTriggerServerMessage__Int32)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18151a9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"InvokeUserCode_CmdOnAnimationTriggerServerMessage__Int32", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.UserCode_CmdOnAnimationResetTriggerServerMessage__Int32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAnimator::*)(int32_t)>(&::Mirror::NetworkAnimator::UserCode_CmdOnAnimationResetTriggerServerMessage__Int32)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18151c190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"UserCode_CmdOnAnimationResetTriggerServerMessage__Int32", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.InvokeUserCode_CmdOnAnimationResetTriggerServerMessage__Int32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::Mirror::NetworkAnimator::InvokeUserCode_CmdOnAnimationResetTriggerServerMessage__Int32)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18151a730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"InvokeUserCode_CmdOnAnimationResetTriggerServerMessage__Int32", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.UserCode_CmdSetAnimatorSpeed__Single
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAnimator::*)(float_t)>(&::Mirror::NetworkAnimator::UserCode_CmdSetAnimatorSpeed__Single)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18151c3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"UserCode_CmdSetAnimatorSpeed__Single", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.InvokeUserCode_CmdSetAnimatorSpeed__Single
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::Mirror::NetworkAnimator::InvokeUserCode_CmdSetAnimatorSpeed__Single)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18151aac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"InvokeUserCode_CmdSetAnimatorSpeed__Single", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.UserCode_RpcOnAnimationClientMessage__Int32__Single__Int32__Single__Byte__
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAnimator::*)(int32_t, float_t, int32_t, float_t, ::ArrayW<uint8_t>)>(&::Mirror::NetworkAnimator::UserCode_RpcOnAnimationClientMessage__Int32__Single__Int32__Single__Byte__)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18151c450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"UserCode_RpcOnAnimationClientMessage__Int32__Single__Int32__Single__Byte[]", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.InvokeUserCode_RpcOnAnimationClientMessage__Int32__Single__Int32__Single__Byte__
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::Mirror::NetworkAnimator::InvokeUserCode_RpcOnAnimationClientMessage__Int32__Single__Int32__Single__Byte__)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18151abf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"InvokeUserCode_RpcOnAnimationClientMessage__Int32__Single__Int32__Single__Byte[]", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.UserCode_RpcOnAnimationParametersClientMessage__Byte__
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAnimator::*)(::ArrayW<uint8_t>)>(&::Mirror::NetworkAnimator::UserCode_RpcOnAnimationParametersClientMessage__Byte__)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18151c530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"UserCode_RpcOnAnimationParametersClientMessage__Byte[]", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.InvokeUserCode_RpcOnAnimationParametersClientMessage__Byte__
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::Mirror::NetworkAnimator::InvokeUserCode_RpcOnAnimationParametersClientMessage__Byte__)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18151ad40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"InvokeUserCode_RpcOnAnimationParametersClientMessage__Byte[]", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.UserCode_RpcOnAnimationTriggerClientMessage__Int32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAnimator::*)(int32_t)>(&::Mirror::NetworkAnimator::UserCode_RpcOnAnimationTriggerClientMessage__Int32)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18151c650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"UserCode_RpcOnAnimationTriggerClientMessage__Int32", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.InvokeUserCode_RpcOnAnimationTriggerClientMessage__Int32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::Mirror::NetworkAnimator::InvokeUserCode_RpcOnAnimationTriggerClientMessage__Int32)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18151aef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"InvokeUserCode_RpcOnAnimationTriggerClientMessage__Int32", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.UserCode_RpcOnAnimationResetTriggerClientMessage__Int32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAnimator::*)(int32_t)>(&::Mirror::NetworkAnimator::UserCode_RpcOnAnimationResetTriggerClientMessage__Int32)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18151c5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"UserCode_RpcOnAnimationResetTriggerClientMessage__Int32", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.InvokeUserCode_RpcOnAnimationResetTriggerClientMessage__Int32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::Mirror::NetworkAnimator::InvokeUserCode_RpcOnAnimationResetTriggerClientMessage__Int32)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18151ae10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"InvokeUserCode_RpcOnAnimationResetTriggerClientMessage__Int32", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.SerializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAnimator::*)(::Mirror::NetworkWriter*, bool)>(&::Mirror::NetworkAnimator::SerializeSyncVars)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18151be50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                    {::i2c::class_of<::Mirror::NetworkAnimator*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkAnimator.DeserializeSyncVars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::NetworkAnimator::*)(::Mirror::NetworkReader*, bool)>(&::Mirror::NetworkAnimator::DeserializeSyncVars)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18151a0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                    {::i2c::class_of<::Mirror::NetworkAnimator*>(), 8}
                ));
    return ___internal_method;
  }
};
constexpr bool& Mirror::NetworkAnimator::__cordl_internal_get_clientAuthority()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientAuthority;
}
constexpr bool const& Mirror::NetworkAnimator::__cordl_internal_get_clientAuthority() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientAuthority;
}
constexpr void Mirror::NetworkAnimator::__cordl_internal_set_clientAuthority(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clientAuthority = value;
}
constexpr ::UnityW<::UnityEngine::Animator>& Mirror::NetworkAnimator::__cordl_internal_get_animator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animator;
}
constexpr ::UnityW<::UnityEngine::Animator> const& Mirror::NetworkAnimator::__cordl_internal_get_animator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animator;
}
constexpr void Mirror::NetworkAnimator::__cordl_internal_set_animator(::UnityW<::UnityEngine::Animator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animator = value;
}
constexpr float_t& Mirror::NetworkAnimator::__cordl_internal_get_animatorSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animatorSpeed;
}
constexpr float_t const& Mirror::NetworkAnimator::__cordl_internal_get_animatorSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animatorSpeed;
}
constexpr void Mirror::NetworkAnimator::__cordl_internal_set_animatorSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animatorSpeed = value;
}
constexpr float_t& Mirror::NetworkAnimator::__cordl_internal_get_previousSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousSpeed;
}
constexpr float_t const& Mirror::NetworkAnimator::__cordl_internal_get_previousSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousSpeed;
}
constexpr void Mirror::NetworkAnimator::__cordl_internal_set_previousSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previousSpeed = value;
}
constexpr ::ArrayW<int32_t>& Mirror::NetworkAnimator::__cordl_internal_get_lastIntParameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastIntParameters;
}
constexpr ::ArrayW<int32_t> const& Mirror::NetworkAnimator::__cordl_internal_get_lastIntParameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastIntParameters;
}
constexpr void Mirror::NetworkAnimator::__cordl_internal_set_lastIntParameters(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastIntParameters = value;
}
constexpr ::ArrayW<float_t>& Mirror::NetworkAnimator::__cordl_internal_get_lastFloatParameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastFloatParameters;
}
constexpr ::ArrayW<float_t> const& Mirror::NetworkAnimator::__cordl_internal_get_lastFloatParameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastFloatParameters;
}
constexpr void Mirror::NetworkAnimator::__cordl_internal_set_lastFloatParameters(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastFloatParameters = value;
}
constexpr ::ArrayW<bool>& Mirror::NetworkAnimator::__cordl_internal_get_lastBoolParameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastBoolParameters;
}
constexpr ::ArrayW<bool> const& Mirror::NetworkAnimator::__cordl_internal_get_lastBoolParameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastBoolParameters;
}
constexpr void Mirror::NetworkAnimator::__cordl_internal_set_lastBoolParameters(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastBoolParameters = value;
}
constexpr ::ArrayW<::UnityEngine::AnimatorControllerParameter*>& Mirror::NetworkAnimator::__cordl_internal_get_parameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parameters;
}
constexpr ::ArrayW<::UnityEngine::AnimatorControllerParameter*> const& Mirror::NetworkAnimator::__cordl_internal_get_parameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parameters;
}
constexpr void Mirror::NetworkAnimator::__cordl_internal_set_parameters(::ArrayW<::UnityEngine::AnimatorControllerParameter*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parameters = value;
}
constexpr ::ArrayW<int32_t>& Mirror::NetworkAnimator::__cordl_internal_get_animationHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationHash;
}
constexpr ::ArrayW<int32_t> const& Mirror::NetworkAnimator::__cordl_internal_get_animationHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationHash;
}
constexpr void Mirror::NetworkAnimator::__cordl_internal_set_animationHash(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animationHash = value;
}
constexpr ::ArrayW<int32_t>& Mirror::NetworkAnimator::__cordl_internal_get_transitionHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transitionHash;
}
constexpr ::ArrayW<int32_t> const& Mirror::NetworkAnimator::__cordl_internal_get_transitionHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transitionHash;
}
constexpr void Mirror::NetworkAnimator::__cordl_internal_set_transitionHash(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transitionHash = value;
}
constexpr ::ArrayW<float_t>& Mirror::NetworkAnimator::__cordl_internal_get_layerWeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerWeight;
}
constexpr ::ArrayW<float_t> const& Mirror::NetworkAnimator::__cordl_internal_get_layerWeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerWeight;
}
constexpr void Mirror::NetworkAnimator::__cordl_internal_set_layerWeight(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layerWeight = value;
}
constexpr double_t& Mirror::NetworkAnimator::__cordl_internal_get_nextSendTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextSendTime;
}
constexpr double_t const& Mirror::NetworkAnimator::__cordl_internal_get_nextSendTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextSendTime;
}
constexpr void Mirror::NetworkAnimator::__cordl_internal_set_nextSendTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextSendTime = value;
}
inline bool Mirror::NetworkAnimator::get_SendMessagesAllowed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"get_SendMessagesAllowed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Mirror::NetworkAnimator::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkAnimator::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkAnimator::CheckSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"CheckSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkAnimator::OnAnimatorSpeedChanged(float_t  _, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"OnAnimatorSpeedChanged", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _, value);
}
inline bool Mirror::NetworkAnimator::CheckAnimStateChanged(::by_ref<int32_t>  stateHash, ::by_ref<float_t>  normalizedTime, int32_t  layerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"CheckAnimStateChanged", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, stateHash, normalizedTime, layerId);
}
inline void Mirror::NetworkAnimator::CheckSendRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"CheckSendRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::NetworkAnimator::SendAnimationMessage(int32_t  stateHash, float_t  normalizedTime, int32_t  layerId, float_t  weight, ::ArrayW<uint8_t>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"SendAnimationMessage", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateHash, normalizedTime, layerId, weight, parameters);
}
inline void Mirror::NetworkAnimator::SendAnimationParametersMessage(::ArrayW<uint8_t>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"SendAnimationParametersMessage", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline void Mirror::NetworkAnimator::HandleAnimMsg(int32_t  stateHash, float_t  normalizedTime, int32_t  layerId, float_t  weight, ::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"HandleAnimMsg", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateHash, normalizedTime, layerId, weight, reader);
}
inline void Mirror::NetworkAnimator::HandleAnimParamsMsg(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"HandleAnimParamsMsg", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline void Mirror::NetworkAnimator::HandleAnimTriggerMsg(int32_t  hash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"HandleAnimTriggerMsg", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hash);
}
inline void Mirror::NetworkAnimator::HandleAnimResetTriggerMsg(int32_t  hash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"HandleAnimResetTriggerMsg", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hash);
}
inline uint64_t Mirror::NetworkAnimator::NextDirtyBits()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"NextDirtyBits", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline bool Mirror::NetworkAnimator::WriteParameters(::Mirror::NetworkWriter*  writer, bool  forceAll)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"WriteParameters", {}, {::i2c::type_of<::Mirror::NetworkWriter*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, writer, forceAll);
}
inline void Mirror::NetworkAnimator::ReadParameters(::Mirror::NetworkReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"ReadParameters", {}, {::i2c::type_of<::Mirror::NetworkReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline void Mirror::NetworkAnimator::OnSerialize(::Mirror::NetworkWriter*  writer, bool  initialState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkAnimator*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, initialState);
}
inline void Mirror::NetworkAnimator::OnDeserialize(::Mirror::NetworkReader*  reader, bool  initialState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkAnimator*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, initialState);
}
inline void Mirror::NetworkAnimator::SetTrigger(::StringW  triggerName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"SetTrigger", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triggerName);
}
inline void Mirror::NetworkAnimator::SetTrigger(int32_t  hash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"SetTrigger", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hash);
}
inline void Mirror::NetworkAnimator::ResetTrigger(::StringW  triggerName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"ResetTrigger", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triggerName);
}
inline void Mirror::NetworkAnimator::ResetTrigger(int32_t  hash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"ResetTrigger", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hash);
}
inline void Mirror::NetworkAnimator::CmdOnAnimationServerMessage(int32_t  stateHash, float_t  normalizedTime, int32_t  layerId, float_t  weight, ::ArrayW<uint8_t>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"CmdOnAnimationServerMessage", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateHash, normalizedTime, layerId, weight, parameters);
}
inline void Mirror::NetworkAnimator::CmdOnAnimationParametersServerMessage(::ArrayW<uint8_t>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"CmdOnAnimationParametersServerMessage", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline void Mirror::NetworkAnimator::CmdOnAnimationTriggerServerMessage(int32_t  hash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"CmdOnAnimationTriggerServerMessage", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hash);
}
inline void Mirror::NetworkAnimator::CmdOnAnimationResetTriggerServerMessage(int32_t  hash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"CmdOnAnimationResetTriggerServerMessage", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hash);
}
inline void Mirror::NetworkAnimator::CmdSetAnimatorSpeed(float_t  newSpeed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"CmdSetAnimatorSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newSpeed);
}
inline void Mirror::NetworkAnimator::RpcOnAnimationClientMessage(int32_t  stateHash, float_t  normalizedTime, int32_t  layerId, float_t  weight, ::ArrayW<uint8_t>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"RpcOnAnimationClientMessage", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateHash, normalizedTime, layerId, weight, parameters);
}
inline void Mirror::NetworkAnimator::RpcOnAnimationParametersClientMessage(::ArrayW<uint8_t>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"RpcOnAnimationParametersClientMessage", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline void Mirror::NetworkAnimator::RpcOnAnimationTriggerClientMessage(int32_t  hash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"RpcOnAnimationTriggerClientMessage", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hash);
}
inline void Mirror::NetworkAnimator::RpcOnAnimationResetTriggerClientMessage(int32_t  hash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"RpcOnAnimationResetTriggerClientMessage", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hash);
}
inline void Mirror::NetworkAnimator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Mirror::NetworkAnimator::_Awake_b__14_0(::UnityEngine::AnimatorControllerParameter*  par)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"<Awake>b__14_0", {}, {::i2c::type_of<::UnityEngine::AnimatorControllerParameter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, par);
}
inline void Mirror::NetworkAnimator::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Mirror::NetworkAnimator::get_NetworkanimatorSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"get_NetworkanimatorSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Mirror::NetworkAnimator::set_NetworkanimatorSpeed(::ByRefConst<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"set_NetworkanimatorSpeed", {}, {::i2c::type_of<::ByRefConst<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Mirror::NetworkAnimator::UserCode_CmdOnAnimationServerMessage__Int32__Single__Int32__Single__Byte__(int32_t  stateHash, float_t  normalizedTime, int32_t  layerId, float_t  weight, ::ArrayW<uint8_t>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"UserCode_CmdOnAnimationServerMessage__Int32__Single__Int32__Single__Byte[]", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateHash, normalizedTime, layerId, weight, parameters);
}
inline void Mirror::NetworkAnimator::InvokeUserCode_CmdOnAnimationServerMessage__Int32__Single__Int32__Single__Byte__(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"InvokeUserCode_CmdOnAnimationServerMessage__Int32__Single__Int32__Single__Byte[]", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void Mirror::NetworkAnimator::UserCode_CmdOnAnimationParametersServerMessage__Byte__(::ArrayW<uint8_t>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"UserCode_CmdOnAnimationParametersServerMessage__Byte[]", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline void Mirror::NetworkAnimator::InvokeUserCode_CmdOnAnimationParametersServerMessage__Byte__(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"InvokeUserCode_CmdOnAnimationParametersServerMessage__Byte[]", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void Mirror::NetworkAnimator::UserCode_CmdOnAnimationTriggerServerMessage__Int32(int32_t  hash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"UserCode_CmdOnAnimationTriggerServerMessage__Int32", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hash);
}
inline void Mirror::NetworkAnimator::InvokeUserCode_CmdOnAnimationTriggerServerMessage__Int32(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"InvokeUserCode_CmdOnAnimationTriggerServerMessage__Int32", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void Mirror::NetworkAnimator::UserCode_CmdOnAnimationResetTriggerServerMessage__Int32(int32_t  hash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"UserCode_CmdOnAnimationResetTriggerServerMessage__Int32", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hash);
}
inline void Mirror::NetworkAnimator::InvokeUserCode_CmdOnAnimationResetTriggerServerMessage__Int32(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"InvokeUserCode_CmdOnAnimationResetTriggerServerMessage__Int32", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void Mirror::NetworkAnimator::UserCode_CmdSetAnimatorSpeed__Single(float_t  newSpeed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"UserCode_CmdSetAnimatorSpeed__Single", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newSpeed);
}
inline void Mirror::NetworkAnimator::InvokeUserCode_CmdSetAnimatorSpeed__Single(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"InvokeUserCode_CmdSetAnimatorSpeed__Single", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void Mirror::NetworkAnimator::UserCode_RpcOnAnimationClientMessage__Int32__Single__Int32__Single__Byte__(int32_t  stateHash, float_t  normalizedTime, int32_t  layerId, float_t  weight, ::ArrayW<uint8_t>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"UserCode_RpcOnAnimationClientMessage__Int32__Single__Int32__Single__Byte[]", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateHash, normalizedTime, layerId, weight, parameters);
}
inline void Mirror::NetworkAnimator::InvokeUserCode_RpcOnAnimationClientMessage__Int32__Single__Int32__Single__Byte__(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"InvokeUserCode_RpcOnAnimationClientMessage__Int32__Single__Int32__Single__Byte[]", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void Mirror::NetworkAnimator::UserCode_RpcOnAnimationParametersClientMessage__Byte__(::ArrayW<uint8_t>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"UserCode_RpcOnAnimationParametersClientMessage__Byte[]", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parameters);
}
inline void Mirror::NetworkAnimator::InvokeUserCode_RpcOnAnimationParametersClientMessage__Byte__(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"InvokeUserCode_RpcOnAnimationParametersClientMessage__Byte[]", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void Mirror::NetworkAnimator::UserCode_RpcOnAnimationTriggerClientMessage__Int32(int32_t  hash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"UserCode_RpcOnAnimationTriggerClientMessage__Int32", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hash);
}
inline void Mirror::NetworkAnimator::InvokeUserCode_RpcOnAnimationTriggerClientMessage__Int32(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"InvokeUserCode_RpcOnAnimationTriggerClientMessage__Int32", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void Mirror::NetworkAnimator::UserCode_RpcOnAnimationResetTriggerClientMessage__Int32(int32_t  hash)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"UserCode_RpcOnAnimationResetTriggerClientMessage__Int32", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hash);
}
inline void Mirror::NetworkAnimator::InvokeUserCode_RpcOnAnimationResetTriggerClientMessage__Int32(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkAnimator*>(),
                        {"InvokeUserCode_RpcOnAnimationResetTriggerClientMessage__Int32", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void Mirror::NetworkAnimator::SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkAnimator*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, forceAll);
}
inline void Mirror::NetworkAnimator::DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::NetworkAnimator*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, initialState);
}
inline ::Mirror::NetworkAnimator* Mirror::NetworkAnimator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::NetworkAnimator*>());
}
// Ctor Parameters []
constexpr ::Mirror::NetworkAnimator::NetworkAnimator()   {
}
