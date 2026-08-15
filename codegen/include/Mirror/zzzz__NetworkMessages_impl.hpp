#pragma once
// IWYU pragma private; include "Mirror/NetworkMessages.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mirror/zzzz__NetworkMessages_def.hpp"
#include "Mirror/zzzz__NetworkConnection_def.hpp"
#include "Mirror/zzzz__NetworkMessageDelegate_def.hpp"
#include "Mirror/zzzz__NetworkMessages_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkWriter_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
template<typename T,typename C>
constexpr bool& Mirror::NetworkMessages___c__DisplayClass6_0_2<T,C>::__cordl_internal_get_requireAuthentication()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requireAuthentication;
}
template<typename T,typename C>
constexpr bool const& Mirror::NetworkMessages___c__DisplayClass6_0_2<T,C>::__cordl_internal_get_requireAuthentication() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requireAuthentication;
}
template<typename T,typename C>
constexpr void Mirror::NetworkMessages___c__DisplayClass6_0_2<T,C>::__cordl_internal_set_requireAuthentication(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requireAuthentication = value;
}
template<typename T,typename C>
constexpr ::System::Action_3<C,T,int32_t>*& Mirror::NetworkMessages___c__DisplayClass6_0_2<T,C>::__cordl_internal_get_handler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handler;
}
template<typename T,typename C>
constexpr ::System::Action_3<C,T,int32_t>* const& Mirror::NetworkMessages___c__DisplayClass6_0_2<T,C>::__cordl_internal_get_handler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handler;
}
template<typename T,typename C>
constexpr void Mirror::NetworkMessages___c__DisplayClass6_0_2<T,C>::__cordl_internal_set_handler(::System::Action_3<C,T,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handler = value;
}
template<typename T,typename C>
inline void Mirror::NetworkMessages___c__DisplayClass6_0_2<T,C>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkMessages___c__DisplayClass6_0_2<T,C>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T,typename C>
inline void Mirror::NetworkMessages___c__DisplayClass6_0_2<T,C>::_WrapHandler_b__0(::Mirror::NetworkConnection*  conn, ::Mirror::NetworkReader*  reader, int32_t  channelId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkMessages___c__DisplayClass6_0_2<T,C>*>(),
                        {"<WrapHandler>b__0", {}, {::i2c::type_of<::Mirror::NetworkConnection*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn, reader, channelId);
}
template<typename T,typename C>
inline ::Mirror::NetworkMessages___c__DisplayClass6_0_2<T,C>* Mirror::NetworkMessages___c__DisplayClass6_0_2<T,C>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::NetworkMessages___c__DisplayClass6_0_2<T,C>*>());
}
// Ctor Parameters []
template<typename T,typename C>
constexpr ::Mirror::NetworkMessages___c__DisplayClass6_0_2<T,C>::NetworkMessages___c__DisplayClass6_0_2()   {
}
template<typename T,typename C>
constexpr ::System::Action_2<C,T>*& Mirror::NetworkMessages___c__DisplayClass7_0_2<T,C>::__cordl_internal_get_handler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handler;
}
template<typename T,typename C>
constexpr ::System::Action_2<C,T>* const& Mirror::NetworkMessages___c__DisplayClass7_0_2<T,C>::__cordl_internal_get_handler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handler;
}
template<typename T,typename C>
constexpr void Mirror::NetworkMessages___c__DisplayClass7_0_2<T,C>::__cordl_internal_set_handler(::System::Action_2<C,T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handler = value;
}
template<typename T,typename C>
inline void Mirror::NetworkMessages___c__DisplayClass7_0_2<T,C>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkMessages___c__DisplayClass7_0_2<T,C>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T,typename C>
inline void Mirror::NetworkMessages___c__DisplayClass7_0_2<T,C>::_WrapHandler_g__Wrapped_0(C  conn, T  msg, int32_t  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkMessages___c__DisplayClass7_0_2<T,C>*>(),
                        {"<WrapHandler>g__Wrapped|0", {}, {::i2c::type_of<C>(), ::i2c::type_of<T>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conn, msg, _);
}
template<typename T,typename C>
inline ::Mirror::NetworkMessages___c__DisplayClass7_0_2<T,C>* Mirror::NetworkMessages___c__DisplayClass7_0_2<T,C>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::NetworkMessages___c__DisplayClass7_0_2<T,C>*>());
}
// Ctor Parameters []
template<typename T,typename C>
constexpr ::Mirror::NetworkMessages___c__DisplayClass7_0_2<T,C>::NetworkMessages___c__DisplayClass7_0_2()   {
}
//  Writing Method size for method: ::Mirror::NetworkMessages.get_MaxContentSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Mirror::NetworkMessages::get_MaxContentSize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18154a200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkMessages*>(),
                        {"get_MaxContentSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::NetworkMessages.UnpackId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Mirror::NetworkReader*, ::by_ref<uint16_t>)>(&::Mirror::NetworkMessages::UnpackId)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1815358e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkMessages*>(),
                        {"UnpackId", {}, {::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::by_ref<uint16_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Mirror::NetworkMessages::get_MaxContentSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkMessages*>(),
                        {"get_MaxContentSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
template<typename T>
inline uint16_t Mirror::NetworkMessages::GetId()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkMessages*>(),
                    {"GetId", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method);
}
template<typename T>
inline void Mirror::NetworkMessages::Pack(T  message, ::Mirror::NetworkWriter*  writer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkMessages*>(),
                    {"Pack", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::Mirror::NetworkWriter*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message, writer);
}
inline bool Mirror::NetworkMessages::UnpackId(::Mirror::NetworkReader*  reader, ::by_ref<uint16_t>  messageId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::NetworkMessages*>(),
                        {"UnpackId", {}, {::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::by_ref<uint16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, reader, messageId);
}
template<typename T,typename C>
inline ::Mirror::NetworkMessageDelegate* Mirror::NetworkMessages::WrapHandler(::System::Action_3<C,T,int32_t>*  handler, bool  requireAuthentication)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkMessages*>(),
                    {"WrapHandler", {::i2c::class_of<T>(), ::i2c::class_of<C>()}, {::i2c::type_of<::System::Action_3<C,T,int32_t>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<C>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Mirror::NetworkMessageDelegate*>(nullptr, ___internal_method, handler, requireAuthentication);
}
template<typename T,typename C>
inline ::Mirror::NetworkMessageDelegate* Mirror::NetworkMessages::WrapHandler(::System::Action_2<C,T>*  handler, bool  requireAuthentication)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Mirror::NetworkMessages*>(),
                    {"WrapHandler", {::i2c::class_of<T>(), ::i2c::class_of<C>()}, {::i2c::type_of<::System::Action_2<C,T>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>(), ::i2c::class_of<C>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Mirror::NetworkMessageDelegate*>(nullptr, ___internal_method, handler, requireAuthentication);
}
// Ctor Parameters []
constexpr ::Mirror::NetworkMessages::NetworkMessages()   {
}
