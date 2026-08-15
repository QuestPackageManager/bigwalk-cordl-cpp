#pragma once
// IWYU pragma private; include "Dissonance/Networking/BaseCommsNetwork_5.hpp"
#include "Dissonance/Networking/zzzz__NetworkMode_impl.hpp"
#include "Dissonance/zzzz__CodecSettings_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Dissonance/Networking/zzzz__BaseCommsNetwork_5_def.hpp"
#include "Dissonance/Networking/Server/Admin/zzzz__IServerAdmin_def.hpp"
#include "Dissonance/Networking/zzzz__BaseCommsNetwork_5_def.hpp"
#include "Dissonance/Networking/zzzz__ConnectionStatus_def.hpp"
#include "Dissonance/Networking/zzzz__ICommsNetworkState_def.hpp"
#include "Dissonance/Networking/zzzz__ICommsNetwork_def.hpp"
#include "Dissonance/Networking/zzzz__NetworkMode_def.hpp"
#include "Dissonance/Networking/zzzz__RoomEvent_def.hpp"
#include "Dissonance/Networking/zzzz__TextMessage_def.hpp"
#include "Dissonance/Networking/zzzz__VoicePacket_def.hpp"
#include "Dissonance/zzzz__ChannelType_def.hpp"
#include "Dissonance/zzzz__CodecSettings_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "Dissonance/zzzz__PlayerChannels_def.hpp"
#include "Dissonance/zzzz__RoomChannels_def.hpp"
#include "Dissonance/zzzz__Rooms_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline ::Dissonance::Networking::ConnectionStatus Dissonance::Networking::BaseCommsNetwork_5_IState<TServer,TClient,TPeer,TClientParam,TServerParam>::get_Status()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5_IState<TServer,TClient,TPeer,TClientParam,TServerParam>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::ConnectionStatus>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5_IState<TServer,TClient,TPeer,TClientParam,TServerParam>::Enter()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5_IState<TServer,TClient,TPeer,TClientParam,TServerParam>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5_IState<TServer,TClient,TPeer,TClientParam,TServerParam>::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5_IState<TServer,TClient,TPeer,TClientParam,TServerParam>*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5_IState<TServer,TClient,TPeer,TClientParam,TServerParam>::Exit()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5_IState<TServer,TClient,TPeer,TClientParam,TServerParam>*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::UnityW<TServer,TClient,TPeer,TClientParam,TServerParam>& Dissonance::Networking::BaseCommsNetwork_5_Idle<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get__net()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____net;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::UnityW<TServer,TClient,TPeer,TClientParam,TServerParam> const& Dissonance::Networking::BaseCommsNetwork_5_Idle<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get__net() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____net;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr void Dissonance::Networking::BaseCommsNetwork_5_Idle<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_set__net(::UnityW<TServer,TClient,TPeer,TClientParam,TServerParam>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____net = value;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5_Idle<TServer,TClient,TPeer,TClientParam,TServerParam>::_ctor(::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*  net)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5_Idle<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, net);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline ::Dissonance::Networking::ConnectionStatus Dissonance::Networking::BaseCommsNetwork_5_Idle<TServer,TClient,TPeer,TClientParam,TServerParam>::get_Status()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5_Idle<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"get_Status", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::ConnectionStatus>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5_Idle<TServer,TClient,TPeer,TClientParam,TServerParam>::Enter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5_Idle<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"Enter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5_Idle<TServer,TClient,TPeer,TClientParam,TServerParam>::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5_Idle<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5_Idle<TServer,TClient,TPeer,TClientParam,TServerParam>::Exit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5_Idle<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"Exit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline ::Dissonance::Networking::BaseCommsNetwork_5_Idle<TServer,TClient,TPeer,TClientParam,TServerParam>* Dissonance::Networking::BaseCommsNetwork_5_Idle<TServer,TClient,TPeer,TClientParam,TServerParam>::New_ctor(::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*  net)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Networking::BaseCommsNetwork_5_Idle<TServer,TClient,TPeer,TClientParam,TServerParam>*>(net));
}
/// @brief Convert operator to "::Dissonance::Networking::BaseCommsNetwork_5_IState<TServer,TClient,TPeer,TClientParam,TServerParam>"
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr  Dissonance::Networking::BaseCommsNetwork_5_Idle<TServer,TClient,TPeer,TClientParam,TServerParam>::operator ::Dissonance::Networking::BaseCommsNetwork_5_IState<TServer,TClient,TPeer,TClientParam,TServerParam>*() noexcept {
return static_cast<::Dissonance::Networking::BaseCommsNetwork_5_IState<TServer,TClient,TPeer,TClientParam,TServerParam>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Networking::BaseCommsNetwork_5_IState<TServer,TClient,TPeer,TClientParam,TServerParam>"
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::Dissonance::Networking::BaseCommsNetwork_5_IState<TServer,TClient,TPeer,TClientParam,TServerParam>* Dissonance::Networking::BaseCommsNetwork_5_Idle<TServer,TClient,TPeer,TClientParam,TServerParam>::i___Dissonance__Networking__BaseCommsNetwork_5_IState_TServer_TClient_TPeer_TClientParam_TServerParam_() noexcept {
return static_cast<::Dissonance::Networking::BaseCommsNetwork_5_IState<TServer,TClient,TPeer,TClientParam,TServerParam>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::Dissonance::Networking::BaseCommsNetwork_5_Idle<TServer,TClient,TPeer,TClientParam,TServerParam>::BaseCommsNetwork_5_Idle()   {
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr TClientParam& Dissonance::Networking::BaseCommsNetwork_5_Session<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get__clientParameter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clientParameter;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr TClientParam const& Dissonance::Networking::BaseCommsNetwork_5_Session<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get__clientParameter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clientParameter;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr void Dissonance::Networking::BaseCommsNetwork_5_Session<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_set__clientParameter(TClientParam  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clientParameter = value;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr TServerParam& Dissonance::Networking::BaseCommsNetwork_5_Session<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get__serverParameter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____serverParameter;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr TServerParam const& Dissonance::Networking::BaseCommsNetwork_5_Session<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get__serverParameter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____serverParameter;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr void Dissonance::Networking::BaseCommsNetwork_5_Session<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_set__serverParameter(TServerParam  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____serverParameter = value;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::Dissonance::Networking::NetworkMode& Dissonance::Networking::BaseCommsNetwork_5_Session<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get__mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mode;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::Dissonance::Networking::NetworkMode const& Dissonance::Networking::BaseCommsNetwork_5_Session<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get__mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mode;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr void Dissonance::Networking::BaseCommsNetwork_5_Session<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_set__mode(::Dissonance::Networking::NetworkMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mode = value;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::UnityW<TServer,TClient,TPeer,TClientParam,TServerParam>& Dissonance::Networking::BaseCommsNetwork_5_Session<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get__net()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____net;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::UnityW<TServer,TClient,TPeer,TClientParam,TServerParam> const& Dissonance::Networking::BaseCommsNetwork_5_Session<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get__net() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____net;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr void Dissonance::Networking::BaseCommsNetwork_5_Session<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_set__net(::UnityW<TServer,TClient,TPeer,TClientParam,TServerParam>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____net = value;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr float_t& Dissonance::Networking::BaseCommsNetwork_5_Session<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get__reconnectionAttemptInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reconnectionAttemptInterval;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr float_t const& Dissonance::Networking::BaseCommsNetwork_5_Session<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get__reconnectionAttemptInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reconnectionAttemptInterval;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr void Dissonance::Networking::BaseCommsNetwork_5_Session<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_set__reconnectionAttemptInterval(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reconnectionAttemptInterval = value;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::System::DateTime& Dissonance::Networking::BaseCommsNetwork_5_Session<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get__lastReconnectionAttempt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastReconnectionAttempt;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::System::DateTime const& Dissonance::Networking::BaseCommsNetwork_5_Session<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get__lastReconnectionAttempt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastReconnectionAttempt;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr void Dissonance::Networking::BaseCommsNetwork_5_Session<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_set__lastReconnectionAttempt(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastReconnectionAttempt = value;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5_Session<TServer,TClient,TPeer,TClientParam,TServerParam>::_ctor(::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*  net, ::Dissonance::Networking::NetworkMode  mode, TServerParam  serverParameter, TClientParam  clientParameter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5_Session<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(), ::i2c::type_of<::Dissonance::Networking::NetworkMode>(), ::i2c::type_of<TServerParam>(), ::i2c::type_of<TClientParam>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, net, mode, serverParameter, clientParameter);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline ::Dissonance::Networking::ConnectionStatus Dissonance::Networking::BaseCommsNetwork_5_Session<TServer,TClient,TPeer,TClientParam,TServerParam>::get_Status()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5_Session<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"get_Status", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::ConnectionStatus>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5_Session<TServer,TClient,TPeer,TClientParam,TServerParam>::Enter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5_Session<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"Enter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5_Session<TServer,TClient,TPeer,TClientParam,TServerParam>::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5_Session<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5_Session<TServer,TClient,TPeer,TClientParam,TServerParam>::Exit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5_Session<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"Exit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5_Session<TServer,TClient,TPeer,TClientParam,TServerParam>::StartServer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5_Session<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"StartServer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5_Session<TServer,TClient,TPeer,TClientParam,TServerParam>::StartClient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5_Session<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"StartClient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline bool Dissonance::Networking::BaseCommsNetwork_5_Session<TServer,TClient,TPeer,TClientParam,TServerParam>::ShouldAttemptReconnect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5_Session<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"ShouldAttemptReconnect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline ::Dissonance::Networking::BaseCommsNetwork_5_Session<TServer,TClient,TPeer,TClientParam,TServerParam>* Dissonance::Networking::BaseCommsNetwork_5_Session<TServer,TClient,TPeer,TClientParam,TServerParam>::New_ctor(::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*  net, ::Dissonance::Networking::NetworkMode  mode, TServerParam  serverParameter, TClientParam  clientParameter)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Networking::BaseCommsNetwork_5_Session<TServer,TClient,TPeer,TClientParam,TServerParam>*>(net, mode, serverParameter, clientParameter));
}
/// @brief Convert operator to "::Dissonance::Networking::BaseCommsNetwork_5_IState<TServer,TClient,TPeer,TClientParam,TServerParam>"
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr  Dissonance::Networking::BaseCommsNetwork_5_Session<TServer,TClient,TPeer,TClientParam,TServerParam>::operator ::Dissonance::Networking::BaseCommsNetwork_5_IState<TServer,TClient,TPeer,TClientParam,TServerParam>*() noexcept {
return static_cast<::Dissonance::Networking::BaseCommsNetwork_5_IState<TServer,TClient,TPeer,TClientParam,TServerParam>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Networking::BaseCommsNetwork_5_IState<TServer,TClient,TPeer,TClientParam,TServerParam>"
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::Dissonance::Networking::BaseCommsNetwork_5_IState<TServer,TClient,TPeer,TClientParam,TServerParam>* Dissonance::Networking::BaseCommsNetwork_5_Session<TServer,TClient,TPeer,TClientParam,TServerParam>::i___Dissonance__Networking__BaseCommsNetwork_5_IState_TServer_TClient_TPeer_TClientParam_TServerParam_() noexcept {
return static_cast<::Dissonance::Networking::BaseCommsNetwork_5_IState<TServer,TClient,TPeer,TClientParam,TServerParam>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::Dissonance::Networking::BaseCommsNetwork_5_Session<TServer,TClient,TPeer,TClientParam,TServerParam>::BaseCommsNetwork_5_Session()   {
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::System::Collections::Generic::Queue_1<::Dissonance::Networking::BaseCommsNetwork_5_IState<TServer,TClient,TPeer,TClientParam,TServerParam>*>*& Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get__nextStates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextStates;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::System::Collections::Generic::Queue_1<::Dissonance::Networking::BaseCommsNetwork_5_IState<TServer,TClient,TPeer,TClientParam,TServerParam>*>* const& Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get__nextStates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextStates;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_set__nextStates(::System::Collections::Generic::Queue_1<::Dissonance::Networking::BaseCommsNetwork_5_IState<TServer,TClient,TPeer,TClientParam,TServerParam>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nextStates = value;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::Dissonance::Networking::BaseCommsNetwork_5_IState<TServer,TClient,TPeer,TClientParam,TServerParam>*& Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::Dissonance::Networking::BaseCommsNetwork_5_IState<TServer,TClient,TPeer,TClientParam,TServerParam>* const& Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_set__state(::Dissonance::Networking::BaseCommsNetwork_5_IState<TServer,TClient,TPeer,TClientParam,TServerParam>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____state = value;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::Dissonance::Networking::NetworkMode& Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get__mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mode;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::Dissonance::Networking::NetworkMode const& Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get__mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mode;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_set__mode(::Dissonance::Networking::NetworkMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mode = value;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr TServer& Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get__Server_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Server_k__BackingField;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr TServer const& Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get__Server_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Server_k__BackingField;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_set__Server_k__BackingField(TServer  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Server_k__BackingField = value;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr TClient& Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get__Client_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Client_k__BackingField;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr TClient const& Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get__Client_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Client_k__BackingField;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_set__Client_k__BackingField(TClient  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Client_k__BackingField = value;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::Dissonance::Log*& Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get_Log()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Log;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::Dissonance::Log* const& Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get_Log() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Log;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_set_Log(::Dissonance::Log*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Log = value;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::StringW& Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get__PlayerName_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayerName_k__BackingField;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::StringW const& Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get__PlayerName_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayerName_k__BackingField;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_set__PlayerName_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PlayerName_k__BackingField = value;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::Dissonance::Rooms*& Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get__Rooms_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Rooms_k__BackingField;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::Dissonance::Rooms* const& Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get__Rooms_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Rooms_k__BackingField;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_set__Rooms_k__BackingField(::Dissonance::Rooms*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Rooms_k__BackingField = value;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::Dissonance::PlayerChannels*& Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get__PlayerChannels_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayerChannels_k__BackingField;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::Dissonance::PlayerChannels* const& Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get__PlayerChannels_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PlayerChannels_k__BackingField;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_set__PlayerChannels_k__BackingField(::Dissonance::PlayerChannels*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PlayerChannels_k__BackingField = value;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::Dissonance::RoomChannels*& Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get__RoomChannels_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RoomChannels_k__BackingField;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::Dissonance::RoomChannels* const& Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get__RoomChannels_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RoomChannels_k__BackingField;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_set__RoomChannels_k__BackingField(::Dissonance::RoomChannels*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RoomChannels_k__BackingField = value;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::Dissonance::CodecSettings& Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get__CodecSettings_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CodecSettings_k__BackingField;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::Dissonance::CodecSettings const& Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get__CodecSettings_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CodecSettings_k__BackingField;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_set__CodecSettings_k__BackingField(::Dissonance::CodecSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CodecSettings_k__BackingField = value;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::System::Action_1<::Dissonance::Networking::NetworkMode>*& Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get_ModeChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ModeChanged;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::System::Action_1<::Dissonance::Networking::NetworkMode>* const& Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get_ModeChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ModeChanged;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_set_ModeChanged(::System::Action_1<::Dissonance::Networking::NetworkMode>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ModeChanged = value;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::System::Action_2<::StringW,::Dissonance::CodecSettings>*& Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get_PlayerJoined()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerJoined;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::System::Action_2<::StringW,::Dissonance::CodecSettings>* const& Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get_PlayerJoined() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerJoined;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_set_PlayerJoined(::System::Action_2<::StringW,::Dissonance::CodecSettings>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerJoined = value;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::System::Action_1<::StringW>*& Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get_PlayerLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerLeft;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::System::Action_1<::StringW>* const& Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get_PlayerLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerLeft;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_set_PlayerLeft(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerLeft = value;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::System::Action_1<::Dissonance::Networking::VoicePacket>*& Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get_VoicePacketReceived()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VoicePacketReceived;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::System::Action_1<::Dissonance::Networking::VoicePacket>* const& Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get_VoicePacketReceived() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VoicePacketReceived;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_set_VoicePacketReceived(::System::Action_1<::Dissonance::Networking::VoicePacket>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VoicePacketReceived = value;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::System::Action_1<::Dissonance::Networking::TextMessage>*& Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get_TextPacketReceived()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TextPacketReceived;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::System::Action_1<::Dissonance::Networking::TextMessage>* const& Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get_TextPacketReceived() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TextPacketReceived;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_set_TextPacketReceived(::System::Action_1<::Dissonance::Networking::TextMessage>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TextPacketReceived = value;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::System::Action_1<::StringW>*& Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get_PlayerStartedSpeaking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerStartedSpeaking;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::System::Action_1<::StringW>* const& Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get_PlayerStartedSpeaking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerStartedSpeaking;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_set_PlayerStartedSpeaking(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerStartedSpeaking = value;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::System::Action_1<::StringW>*& Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get_PlayerStoppedSpeaking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerStoppedSpeaking;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::System::Action_1<::StringW>* const& Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get_PlayerStoppedSpeaking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerStoppedSpeaking;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_set_PlayerStoppedSpeaking(::System::Action_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerStoppedSpeaking = value;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::System::Action_1<::Dissonance::Networking::RoomEvent>*& Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get_PlayerEnteredRoom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerEnteredRoom;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::System::Action_1<::Dissonance::Networking::RoomEvent>* const& Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get_PlayerEnteredRoom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerEnteredRoom;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_set_PlayerEnteredRoom(::System::Action_1<::Dissonance::Networking::RoomEvent>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerEnteredRoom = value;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::System::Action_1<::Dissonance::Networking::RoomEvent>*& Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get_PlayerExitedRoom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerExitedRoom;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::System::Action_1<::Dissonance::Networking::RoomEvent>* const& Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get_PlayerExitedRoom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerExitedRoom;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_set_PlayerExitedRoom(::System::Action_1<::Dissonance::Networking::RoomEvent>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerExitedRoom = value;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr bool& Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get__IsInitialized_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsInitialized_k__BackingField;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr bool const& Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_get__IsInitialized_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsInitialized_k__BackingField;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::__cordl_internal_set__IsInitialized_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsInitialized_k__BackingField = value;
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline TServer Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::get_Server()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"get_Server", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TServer>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::set_Server(TServer  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"set_Server", {}, {::i2c::type_of<TServer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline TClient Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::get_Client()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"get_Client", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TClient>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::set_Client(TClient  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"set_Client", {}, {::i2c::type_of<TClient>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline ::StringW Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::get_PlayerName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"get_PlayerName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::set_PlayerName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"set_PlayerName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline ::Dissonance::Rooms* Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::get_Rooms()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"get_Rooms", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Rooms*>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::set_Rooms(::Dissonance::Rooms*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"set_Rooms", {}, {::i2c::type_of<::Dissonance::Rooms*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline ::Dissonance::PlayerChannels* Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::get_PlayerChannels()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"get_PlayerChannels", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::PlayerChannels*>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::set_PlayerChannels(::Dissonance::PlayerChannels*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"set_PlayerChannels", {}, {::i2c::type_of<::Dissonance::PlayerChannels*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline ::Dissonance::RoomChannels* Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::get_RoomChannels()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"get_RoomChannels", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::RoomChannels*>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::set_RoomChannels(::Dissonance::RoomChannels*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"set_RoomChannels", {}, {::i2c::type_of<::Dissonance::RoomChannels*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline ::Dissonance::CodecSettings Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::get_CodecSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"get_CodecSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::CodecSettings>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::set_CodecSettings(::Dissonance::CodecSettings  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"set_CodecSettings", {}, {::i2c::type_of<::Dissonance::CodecSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::add_ModeChanged(::System::Action_1<::Dissonance::Networking::NetworkMode>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"add_ModeChanged", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::NetworkMode>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::remove_ModeChanged(::System::Action_1<::Dissonance::Networking::NetworkMode>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"remove_ModeChanged", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::NetworkMode>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::add_PlayerJoined(::System::Action_2<::StringW,::Dissonance::CodecSettings>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"add_PlayerJoined", {}, {::i2c::type_of<::System::Action_2<::StringW,::Dissonance::CodecSettings>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::remove_PlayerJoined(::System::Action_2<::StringW,::Dissonance::CodecSettings>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"remove_PlayerJoined", {}, {::i2c::type_of<::System::Action_2<::StringW,::Dissonance::CodecSettings>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::add_PlayerLeft(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"add_PlayerLeft", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::remove_PlayerLeft(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"remove_PlayerLeft", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::add_VoicePacketReceived(::System::Action_1<::Dissonance::Networking::VoicePacket>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"add_VoicePacketReceived", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::VoicePacket>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::remove_VoicePacketReceived(::System::Action_1<::Dissonance::Networking::VoicePacket>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"remove_VoicePacketReceived", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::VoicePacket>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::add_TextPacketReceived(::System::Action_1<::Dissonance::Networking::TextMessage>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"add_TextPacketReceived", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::TextMessage>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::remove_TextPacketReceived(::System::Action_1<::Dissonance::Networking::TextMessage>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"remove_TextPacketReceived", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::TextMessage>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::add_PlayerStartedSpeaking(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"add_PlayerStartedSpeaking", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::remove_PlayerStartedSpeaking(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"remove_PlayerStartedSpeaking", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::add_PlayerStoppedSpeaking(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"add_PlayerStoppedSpeaking", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::remove_PlayerStoppedSpeaking(::System::Action_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"remove_PlayerStoppedSpeaking", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::add_PlayerEnteredRoom(::System::Action_1<::Dissonance::Networking::RoomEvent>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"add_PlayerEnteredRoom", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::RoomEvent>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::remove_PlayerEnteredRoom(::System::Action_1<::Dissonance::Networking::RoomEvent>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"remove_PlayerEnteredRoom", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::RoomEvent>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::add_PlayerExitedRoom(::System::Action_1<::Dissonance::Networking::RoomEvent>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"add_PlayerExitedRoom", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::RoomEvent>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::remove_PlayerExitedRoom(::System::Action_1<::Dissonance::Networking::RoomEvent>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"remove_PlayerExitedRoom", {}, {::i2c::type_of<::System::Action_1<::Dissonance::Networking::RoomEvent>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline bool Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::get_IsInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"get_IsInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::set_IsInitialized(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"set_IsInitialized", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline ::Dissonance::Networking::ConnectionStatus Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::get_Status()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"get_Status", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::ConnectionStatus>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline ::Dissonance::Networking::NetworkMode Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::get_Mode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"get_Mode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::NetworkMode>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::set_Mode(::Dissonance::Networking::NetworkMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"set_Mode", {}, {::i2c::type_of<::Dissonance::Networking::NetworkMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline ::Dissonance::Networking::Server::Admin::IServerAdmin* Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::get_ServerAdmin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"get_ServerAdmin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::Networking::Server::Admin::IServerAdmin*>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline TServer Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::CreateServer(TServerParam  connectionParameters)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<TServer>(this, ___internal_method, connectionParameters);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline TClient Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::CreateClient(TClientParam  connectionParameters)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<TClient>(this, ___internal_method, connectionParameters);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::Dissonance_Networking_ICommsNetwork_Initialize(::StringW  playerName, ::Dissonance::Rooms*  rooms, ::Dissonance::PlayerChannels*  playerChannels, ::Dissonance::RoomChannels*  roomChannels, ::Dissonance::CodecSettings  codecSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"Dissonance.Networking.ICommsNetwork.Initialize", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::Rooms*>(), ::i2c::type_of<::Dissonance::PlayerChannels*>(), ::i2c::type_of<::Dissonance::RoomChannels*>(), ::i2c::type_of<::Dissonance::CodecSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerName, rooms, playerChannels, roomChannels, codecSettings);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::LoadState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"LoadState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::Stop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"Stop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::RunAsHost(TServerParam  serverParameters, TClientParam  clientParameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"RunAsHost", {}, {::i2c::type_of<TServerParam>(), ::i2c::type_of<TClientParam>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serverParameters, clientParameters);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::RunAsClient(TClientParam  clientParameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"RunAsClient", {}, {::i2c::type_of<TClientParam>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clientParameters);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::RunAsDedicatedServer(TServerParam  serverParameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"RunAsDedicatedServer", {}, {::i2c::type_of<TServerParam>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serverParameters);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::ChangeState(::Dissonance::Networking::BaseCommsNetwork_5_IState<TServer,TClient,TPeer,TClientParam,TServerParam>*  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"ChangeState", {}, {::i2c::type_of<::Dissonance::Networking::BaseCommsNetwork_5_IState<TServer,TClient,TPeer,TClientParam,TServerParam>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::StartServer(TServerParam  connectParams)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"StartServer", {}, {::i2c::type_of<TServerParam>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectParams);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::StopServer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"StopServer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::StartClient(TClientParam  connectParams)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"StartClient", {}, {::i2c::type_of<TClientParam>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectParams);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::StopClient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"StopClient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::SendVoice(::System::ArraySegment_1<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"SendVoice", {}, {::i2c::type_of<::System::ArraySegment_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::SendText(::StringW  data, ::Dissonance::ChannelType  recipientType, ::StringW  recipientId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"SendText", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::ChannelType>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, recipientType, recipientId);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::OnPlayerJoined(::StringW  obj, ::Dissonance::CodecSettings  codecSettings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"OnPlayerJoined", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Dissonance::CodecSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, codecSettings);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::OnPlayerLeft(::StringW  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"OnPlayerLeft", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::OnPlayerEnteredRoom(::Dissonance::Networking::RoomEvent  evt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"OnPlayerEnteredRoom", {}, {::i2c::type_of<::Dissonance::Networking::RoomEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::OnPlayerExitedRoom(::Dissonance::Networking::RoomEvent  evt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"OnPlayerExitedRoom", {}, {::i2c::type_of<::Dissonance::Networking::RoomEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::OnVoicePacketReceived(::Dissonance::Networking::VoicePacket  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"OnVoicePacketReceived", {}, {::i2c::type_of<::Dissonance::Networking::VoicePacket>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::OnTextPacketReceived(::Dissonance::Networking::TextMessage  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"OnTextPacketReceived", {}, {::i2c::type_of<::Dissonance::Networking::TextMessage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::OnPlayerStartedSpeaking(::StringW  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"OnPlayerStartedSpeaking", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::OnPlayerStoppedSpeaking(::StringW  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"OnPlayerStoppedSpeaking", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::OnModeChanged(::Dissonance::Networking::NetworkMode  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"OnModeChanged", {}, {::i2c::type_of<::Dissonance::Networking::NetworkMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline void Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::OnInspectorGui()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>(),
                        {"OnInspectorGui", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
inline ::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>* Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>*>());
}
/// @brief Convert operator to "::Dissonance::Networking::ICommsNetwork"
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr  Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::operator ::Dissonance::Networking::ICommsNetwork*() noexcept {
return static_cast<::Dissonance::Networking::ICommsNetwork*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Networking::ICommsNetwork"
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::Dissonance::Networking::ICommsNetwork* Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::i___Dissonance__Networking__ICommsNetwork() noexcept {
return static_cast<::Dissonance::Networking::ICommsNetwork*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Dissonance::Networking::ICommsNetworkState"
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr  Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::operator ::Dissonance::Networking::ICommsNetworkState*() noexcept {
return static_cast<::Dissonance::Networking::ICommsNetworkState*>(static_cast<void*>(this));
}
/// @brief Convert to "::Dissonance::Networking::ICommsNetworkState"
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::Dissonance::Networking::ICommsNetworkState* Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::i___Dissonance__Networking__ICommsNetworkState() noexcept {
return static_cast<::Dissonance::Networking::ICommsNetworkState*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TServer,typename TClient,typename TPeer,typename TClientParam,typename TServerParam>
constexpr ::Dissonance::Networking::BaseCommsNetwork_5<TServer,TClient,TPeer,TClientParam,TServerParam>::BaseCommsNetwork_5()   {
}
