#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Channel_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__Channel_2_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__ChannelReader_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__ChannelWriter_1_def.hpp"
template<typename TWrite,typename TRead>
constexpr ::Cysharp::Threading::Tasks::ChannelReader_1<TRead>*& Cysharp::Threading::Tasks::Channel_2<TWrite,TRead>::__cordl_internal_get__Reader_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Reader_k__BackingField;
}
template<typename TWrite,typename TRead>
constexpr ::Cysharp::Threading::Tasks::ChannelReader_1<TRead>* const& Cysharp::Threading::Tasks::Channel_2<TWrite,TRead>::__cordl_internal_get__Reader_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Reader_k__BackingField;
}
template<typename TWrite,typename TRead>
constexpr void Cysharp::Threading::Tasks::Channel_2<TWrite,TRead>::__cordl_internal_set__Reader_k__BackingField(::Cysharp::Threading::Tasks::ChannelReader_1<TRead>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Reader_k__BackingField = value;
}
template<typename TWrite,typename TRead>
constexpr ::Cysharp::Threading::Tasks::ChannelWriter_1<TWrite>*& Cysharp::Threading::Tasks::Channel_2<TWrite,TRead>::__cordl_internal_get__Writer_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Writer_k__BackingField;
}
template<typename TWrite,typename TRead>
constexpr ::Cysharp::Threading::Tasks::ChannelWriter_1<TWrite>* const& Cysharp::Threading::Tasks::Channel_2<TWrite,TRead>::__cordl_internal_get__Writer_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Writer_k__BackingField;
}
template<typename TWrite,typename TRead>
constexpr void Cysharp::Threading::Tasks::Channel_2<TWrite,TRead>::__cordl_internal_set__Writer_k__BackingField(::Cysharp::Threading::Tasks::ChannelWriter_1<TWrite>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Writer_k__BackingField = value;
}
template<typename TWrite,typename TRead>
inline ::Cysharp::Threading::Tasks::ChannelReader_1<TRead>* Cysharp::Threading::Tasks::Channel_2<TWrite,TRead>::get_Reader()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Channel_2<TWrite,TRead>*>(),
                        {"get_Reader", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::ChannelReader_1<TRead>*>(this, ___internal_method);
}
template<typename TWrite,typename TRead>
inline void Cysharp::Threading::Tasks::Channel_2<TWrite,TRead>::set_Reader(::Cysharp::Threading::Tasks::ChannelReader_1<TRead>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Channel_2<TWrite,TRead>*>(),
                        {"set_Reader", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::ChannelReader_1<TRead>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TWrite,typename TRead>
inline ::Cysharp::Threading::Tasks::ChannelWriter_1<TWrite>* Cysharp::Threading::Tasks::Channel_2<TWrite,TRead>::get_Writer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Channel_2<TWrite,TRead>*>(),
                        {"get_Writer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::ChannelWriter_1<TWrite>*>(this, ___internal_method);
}
template<typename TWrite,typename TRead>
inline void Cysharp::Threading::Tasks::Channel_2<TWrite,TRead>::set_Writer(::Cysharp::Threading::Tasks::ChannelWriter_1<TWrite>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Channel_2<TWrite,TRead>*>(),
                        {"set_Writer", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::ChannelWriter_1<TWrite>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TWrite,typename TRead>
inline ::Cysharp::Threading::Tasks::ChannelReader_1<TRead>* Cysharp::Threading::Tasks::Channel_2<TWrite,TRead>::op_Implicit___Cysharp__Threading__Tasks__ChannelReader_1_TRead__(::Cysharp::Threading::Tasks::Channel_2<TWrite,TRead>*  channel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Channel_2<TWrite,TRead>*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::Channel_2<TWrite,TRead>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::ChannelReader_1<TRead>*>(nullptr, ___internal_method, channel);
}
template<typename TWrite,typename TRead>
inline ::Cysharp::Threading::Tasks::ChannelWriter_1<TWrite>* Cysharp::Threading::Tasks::Channel_2<TWrite,TRead>::op_Implicit___Cysharp__Threading__Tasks__ChannelWriter_1_TWrite__(::Cysharp::Threading::Tasks::Channel_2<TWrite,TRead>*  channel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Channel_2<TWrite,TRead>*>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::Channel_2<TWrite,TRead>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::ChannelWriter_1<TWrite>*>(nullptr, ___internal_method, channel);
}
template<typename TWrite,typename TRead>
inline void Cysharp::Threading::Tasks::Channel_2<TWrite,TRead>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Channel_2<TWrite,TRead>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TWrite,typename TRead>
inline ::Cysharp::Threading::Tasks::Channel_2<TWrite,TRead>* Cysharp::Threading::Tasks::Channel_2<TWrite,TRead>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Channel_2<TWrite,TRead>*>());
}
// Ctor Parameters []
template<typename TWrite,typename TRead>
constexpr ::Cysharp::Threading::Tasks::Channel_2<TWrite,TRead>::Channel_2()   {
}
