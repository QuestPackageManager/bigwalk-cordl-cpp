#pragma once
// IWYU pragma private; include "Animancer/ExitEvent.hpp"
#include "Animancer/zzzz__Key_impl.hpp"
#include "Animancer/zzzz__ExitEvent_def.hpp"
#include "Animancer/zzzz__AnimancerNode_def.hpp"
#include "Animancer/zzzz__AnimancerPlayable_def.hpp"
#include "Animancer/zzzz__IUpdatable_def.hpp"
#include "Animancer/zzzz__Key_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::Animancer::ExitEvent.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Animancer::AnimancerNode*, ::System::Action*)>(&::Animancer::ExitEvent::Register)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18030c0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ExitEvent*>(),
                        {"Register", {}, {::i2c::type_of<::Animancer::AnimancerNode*>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ExitEvent.Unregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Animancer::AnimancerPlayable*)>(&::Animancer::ExitEvent::Unregister)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18030c180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ExitEvent*>(),
                        {"Unregister", {}, {::i2c::type_of<::Animancer::AnimancerPlayable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ExitEvent.Unregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Animancer::AnimancerNode*)>(&::Animancer::ExitEvent::Unregister)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x18030c240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ExitEvent*>(),
                        {"Unregister", {}, {::i2c::type_of<::Animancer::AnimancerNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ExitEvent.Animancer_IUpdatable_Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ExitEvent::*)()>(&::Animancer::ExitEvent::Animancer_IUpdatable_Update)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18030c000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ExitEvent*>(),
                        {"Animancer.IUpdatable.Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ExitEvent.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ExitEvent::*)()>(&::Animancer::ExitEvent::Release)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18030c130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ExitEvent*>(),
                        {"Release", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::ExitEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::ExitEvent::*)()>(&::Animancer::ExitEvent::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18030a280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ExitEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action*& Animancer::ExitEvent::__cordl_internal_get__Callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Callback;
}
constexpr ::System::Action* const& Animancer::ExitEvent::__cordl_internal_get__Callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Callback;
}
constexpr void Animancer::ExitEvent::__cordl_internal_set__Callback(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Callback = value;
}
constexpr ::Animancer::AnimancerNode*& Animancer::ExitEvent::__cordl_internal_get__Node()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Node;
}
constexpr ::Animancer::AnimancerNode* const& Animancer::ExitEvent::__cordl_internal_get__Node() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Node;
}
constexpr void Animancer::ExitEvent::__cordl_internal_set__Node(::Animancer::AnimancerNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Node = value;
}
inline void Animancer::ExitEvent::Register(::Animancer::AnimancerNode*  node, ::System::Action*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ExitEvent*>(),
                        {"Register", {}, {::i2c::type_of<::Animancer::AnimancerNode*>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, node, callback);
}
inline bool Animancer::ExitEvent::Unregister(::Animancer::AnimancerPlayable*  animancer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ExitEvent*>(),
                        {"Unregister", {}, {::i2c::type_of<::Animancer::AnimancerPlayable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, animancer);
}
inline bool Animancer::ExitEvent::Unregister(::Animancer::AnimancerNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ExitEvent*>(),
                        {"Unregister", {}, {::i2c::type_of<::Animancer::AnimancerNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, node);
}
inline void Animancer::ExitEvent::Animancer_IUpdatable_Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ExitEvent*>(),
                        {"Animancer.IUpdatable.Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::ExitEvent::Release()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ExitEvent*>(),
                        {"Release", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::ExitEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::ExitEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::ExitEvent* Animancer::ExitEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::ExitEvent*>());
}
/// @brief Convert operator to "::Animancer::IUpdatable"
constexpr  Animancer::ExitEvent::operator ::Animancer::IUpdatable*() noexcept {
return static_cast<::Animancer::IUpdatable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IUpdatable"
constexpr ::Animancer::IUpdatable* Animancer::ExitEvent::i___Animancer__IUpdatable() noexcept {
return static_cast<::Animancer::IUpdatable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::Key_IListItem"
constexpr  Animancer::ExitEvent::operator ::Animancer::Key_IListItem*() noexcept {
return static_cast<::Animancer::Key_IListItem*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::Key_IListItem"
constexpr ::Animancer::Key_IListItem* Animancer::ExitEvent::i___Animancer__Key_IListItem() noexcept {
return static_cast<::Animancer::Key_IListItem*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Animancer::ExitEvent::ExitEvent()   {
}
