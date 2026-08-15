#pragma once
// IWYU pragma private; include "Dissonance/Channels_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Dissonance/zzzz__Channels_2_def.hpp"
#include "Dissonance/Audio/Capture/zzzz__IChannelPriorityProvider_def.hpp"
#include "Dissonance/Datastructures/zzzz__Pool_1_def.hpp"
#include "Dissonance/zzzz__ChannelPriority_def.hpp"
#include "Dissonance/zzzz__ChannelProperties_def.hpp"
#include "Dissonance/zzzz__Channels_2_def.hpp"
#include "Dissonance/zzzz__Log_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
template<typename T,typename TId>
constexpr ::Dissonance::Audio::Capture::IChannelPriorityProvider*& Dissonance::Channels_2___c__DisplayClass12_0<T,TId>::__cordl_internal_get_priorityProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___priorityProvider;
}
template<typename T,typename TId>
constexpr ::Dissonance::Audio::Capture::IChannelPriorityProvider* const& Dissonance::Channels_2___c__DisplayClass12_0<T,TId>::__cordl_internal_get_priorityProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___priorityProvider;
}
template<typename T,typename TId>
constexpr void Dissonance::Channels_2___c__DisplayClass12_0<T,TId>::__cordl_internal_set_priorityProvider(::Dissonance::Audio::Capture::IChannelPriorityProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___priorityProvider = value;
}
template<typename T,typename TId>
inline void Dissonance::Channels_2___c__DisplayClass12_0<T,TId>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Channels_2___c__DisplayClass12_0<T,TId>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T,typename TId>
inline ::Dissonance::ChannelProperties* Dissonance::Channels_2___c__DisplayClass12_0<T,TId>::__ctor_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Channels_2___c__DisplayClass12_0<T,TId>*>(),
                        {"<.ctor>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Dissonance::ChannelProperties*>(this, ___internal_method);
}
template<typename T,typename TId>
inline ::Dissonance::Channels_2___c__DisplayClass12_0<T,TId>* Dissonance::Channels_2___c__DisplayClass12_0<T,TId>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Channels_2___c__DisplayClass12_0<T,TId>*>());
}
// Ctor Parameters []
template<typename T,typename TId>
constexpr ::Dissonance::Channels_2___c__DisplayClass12_0<T,TId>::Channels_2___c__DisplayClass12_0()   {
}
template<typename T,typename TId>
constexpr ::Dissonance::Log*& Dissonance::Channels_2<T,TId>::__cordl_internal_get_Log()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Log;
}
template<typename T,typename TId>
constexpr ::Dissonance::Log* const& Dissonance::Channels_2<T,TId>::__cordl_internal_get_Log() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Log;
}
template<typename T,typename TId>
constexpr void Dissonance::Channels_2<T,TId>::__cordl_internal_set_Log(::Dissonance::Log*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Log = value;
}
template<typename T,typename TId>
constexpr ::System::Collections::Generic::Dictionary_2<uint16_t,T>*& Dissonance::Channels_2<T,TId>::__cordl_internal_get__openChannelsBySubId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____openChannelsBySubId;
}
template<typename T,typename TId>
constexpr ::System::Collections::Generic::Dictionary_2<uint16_t,T>* const& Dissonance::Channels_2<T,TId>::__cordl_internal_get__openChannelsBySubId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____openChannelsBySubId;
}
template<typename T,typename TId>
constexpr void Dissonance::Channels_2<T,TId>::__cordl_internal_set__openChannelsBySubId(::System::Collections::Generic::Dictionary_2<uint16_t,T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____openChannelsBySubId = value;
}
template<typename T,typename TId>
constexpr ::Dissonance::Datastructures::Pool_1<::Dissonance::ChannelProperties*>*& Dissonance::Channels_2<T,TId>::__cordl_internal_get__propertiesPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____propertiesPool;
}
template<typename T,typename TId>
constexpr ::Dissonance::Datastructures::Pool_1<::Dissonance::ChannelProperties*>* const& Dissonance::Channels_2<T,TId>::__cordl_internal_get__propertiesPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____propertiesPool;
}
template<typename T,typename TId>
constexpr void Dissonance::Channels_2<T,TId>::__cordl_internal_set__propertiesPool(::Dissonance::Datastructures::Pool_1<::Dissonance::ChannelProperties*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____propertiesPool = value;
}
template<typename T,typename TId>
constexpr uint16_t& Dissonance::Channels_2<T,TId>::__cordl_internal_get__nextId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextId;
}
template<typename T,typename TId>
constexpr uint16_t const& Dissonance::Channels_2<T,TId>::__cordl_internal_get__nextId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextId;
}
template<typename T,typename TId>
constexpr void Dissonance::Channels_2<T,TId>::__cordl_internal_set__nextId(uint16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nextId = value;
}
template<typename T,typename TId>
constexpr ::System::Action_2<TId,::Dissonance::ChannelProperties*>*& Dissonance::Channels_2<T,TId>::__cordl_internal_get_OpenedChannel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OpenedChannel;
}
template<typename T,typename TId>
constexpr ::System::Action_2<TId,::Dissonance::ChannelProperties*>* const& Dissonance::Channels_2<T,TId>::__cordl_internal_get_OpenedChannel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OpenedChannel;
}
template<typename T,typename TId>
constexpr void Dissonance::Channels_2<T,TId>::__cordl_internal_set_OpenedChannel(::System::Action_2<TId,::Dissonance::ChannelProperties*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OpenedChannel = value;
}
template<typename T,typename TId>
constexpr ::System::Action_2<TId,::Dissonance::ChannelProperties*>*& Dissonance::Channels_2<T,TId>::__cordl_internal_get_ClosedChannel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClosedChannel;
}
template<typename T,typename TId>
constexpr ::System::Action_2<TId,::Dissonance::ChannelProperties*>* const& Dissonance::Channels_2<T,TId>::__cordl_internal_get_ClosedChannel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClosedChannel;
}
template<typename T,typename TId>
constexpr void Dissonance::Channels_2<T,TId>::__cordl_internal_set_ClosedChannel(::System::Action_2<TId,::Dissonance::ChannelProperties*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ClosedChannel = value;
}
template<typename T,typename TId>
inline void Dissonance::Channels_2<T,TId>::add_OpenedChannel(::System::Action_2<TId,::Dissonance::ChannelProperties*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Channels_2<T,TId>*>(),
                        {"add_OpenedChannel", {}, {::i2c::type_of<::System::Action_2<TId,::Dissonance::ChannelProperties*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T,typename TId>
inline void Dissonance::Channels_2<T,TId>::remove_OpenedChannel(::System::Action_2<TId,::Dissonance::ChannelProperties*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Channels_2<T,TId>*>(),
                        {"remove_OpenedChannel", {}, {::i2c::type_of<::System::Action_2<TId,::Dissonance::ChannelProperties*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T,typename TId>
inline void Dissonance::Channels_2<T,TId>::add_ClosedChannel(::System::Action_2<TId,::Dissonance::ChannelProperties*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Channels_2<T,TId>*>(),
                        {"add_ClosedChannel", {}, {::i2c::type_of<::System::Action_2<TId,::Dissonance::ChannelProperties*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T,typename TId>
inline void Dissonance::Channels_2<T,TId>::remove_ClosedChannel(::System::Action_2<TId,::Dissonance::ChannelProperties*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Channels_2<T,TId>*>(),
                        {"remove_ClosedChannel", {}, {::i2c::type_of<::System::Action_2<TId,::Dissonance::ChannelProperties*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T,typename TId>
inline int32_t Dissonance::Channels_2<T,TId>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Channels_2<T,TId>*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T,typename TId>
inline void Dissonance::Channels_2<T,TId>::_ctor(::Dissonance::Audio::Capture::IChannelPriorityProvider*  priorityProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Channels_2<T,TId>*>(),
                        {".ctor", {}, {::i2c::type_of<::Dissonance::Audio::Capture::IChannelPriorityProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, priorityProvider);
}
template<typename T,typename TId>
inline T Dissonance::Channels_2<T,TId>::CreateChannel(uint16_t  subscriptionId, TId  channelId, ::Dissonance::ChannelProperties*  properties)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Dissonance::Channels_2<T,TId>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, subscriptionId, channelId, properties);
}
template<typename T,typename TId>
inline bool Dissonance::Channels_2<T,TId>::Contains(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Channels_2<T,TId>*>(),
                        {"Contains", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename T,typename TId>
inline T Dissonance::Channels_2<T,TId>::Open(TId  id, bool  positional, ::Dissonance::ChannelPriority  priority, float_t  amplitudeMultiplier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Channels_2<T,TId>*>(),
                        {"Open", {}, {::i2c::type_of<TId>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Dissonance::ChannelPriority>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, id, positional, priority, amplitudeMultiplier);
}
template<typename T,typename TId>
inline bool Dissonance::Channels_2<T,TId>::Close(T  channel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Channels_2<T,TId>*>(),
                        {"Close", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, channel);
}
template<typename T,typename TId>
inline void Dissonance::Channels_2<T,TId>::Refresh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Channels_2<T,TId>*>(),
                        {"Refresh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T,typename TId>
inline ::System::Collections::Generic::Dictionary_2_Enumerator<uint16_t,T> Dissonance::Channels_2<T,TId>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Dissonance::Channels_2<T,TId>*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2_Enumerator<uint16_t,T>>(this, ___internal_method);
}
template<typename T,typename TId>
inline ::Dissonance::Channels_2<T,TId>* Dissonance::Channels_2<T,TId>::New_ctor(::Dissonance::Audio::Capture::IChannelPriorityProvider*  priorityProvider)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Dissonance::Channels_2<T,TId>*>(priorityProvider));
}
// Ctor Parameters []
template<typename T,typename TId>
constexpr ::Dissonance::Channels_2<T,TId>::Channels_2()   {
}
