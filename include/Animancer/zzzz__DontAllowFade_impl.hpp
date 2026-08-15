#pragma once
// IWYU pragma private; include "Animancer/DontAllowFade.hpp"
#include "Animancer/zzzz__Key_impl.hpp"
#include "Animancer/zzzz__DontAllowFade_def.hpp"
#include "Animancer/zzzz__AnimancerNode_def.hpp"
#include "Animancer/zzzz__AnimancerPlayable_def.hpp"
#include "Animancer/zzzz__IUpdatable_def.hpp"
#include "Animancer/zzzz__Key_def.hpp"
//  Writing Method size for method: ::Animancer::DontAllowFade._cordl_Assert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Animancer::AnimancerPlayable*)>(&::Animancer::DontAllowFade::_cordl_Assert)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DontAllowFade*>(),
                        {"Assert", {}, {::i2c::type_of<::Animancer::AnimancerPlayable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DontAllowFade.Validate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Animancer::AnimancerNode*)>(&::Animancer::DontAllowFade::Validate)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18030a250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DontAllowFade*>(),
                        {"Validate", {}, {::i2c::type_of<::Animancer::AnimancerNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DontAllowFade.Animancer_IUpdatable_Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::DontAllowFade::*)()>(&::Animancer::DontAllowFade::Animancer_IUpdatable_Update)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18030a170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DontAllowFade*>(),
                        {"Animancer.IUpdatable.Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Animancer::DontAllowFade._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Animancer::DontAllowFade::*)()>(&::Animancer::DontAllowFade::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18030a280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DontAllowFade*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Animancer::DontAllowFade::_cordl_Assert(::Animancer::AnimancerPlayable*  animancer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DontAllowFade*>(),
                        {"Assert", {}, {::i2c::type_of<::Animancer::AnimancerPlayable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, animancer);
}
inline void Animancer::DontAllowFade::Validate(::Animancer::AnimancerNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DontAllowFade*>(),
                        {"Validate", {}, {::i2c::type_of<::Animancer::AnimancerNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, node);
}
inline void Animancer::DontAllowFade::Animancer_IUpdatable_Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DontAllowFade*>(),
                        {"Animancer.IUpdatable.Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Animancer::DontAllowFade::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Animancer::DontAllowFade*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Animancer::DontAllowFade* Animancer::DontAllowFade::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Animancer::DontAllowFade*>());
}
/// @brief Convert operator to "::Animancer::IUpdatable"
constexpr  Animancer::DontAllowFade::operator ::Animancer::IUpdatable*() noexcept {
return static_cast<::Animancer::IUpdatable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::IUpdatable"
constexpr ::Animancer::IUpdatable* Animancer::DontAllowFade::i___Animancer__IUpdatable() noexcept {
return static_cast<::Animancer::IUpdatable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Animancer::Key_IListItem"
constexpr  Animancer::DontAllowFade::operator ::Animancer::Key_IListItem*() noexcept {
return static_cast<::Animancer::Key_IListItem*>(static_cast<void*>(this));
}
/// @brief Convert to "::Animancer::Key_IListItem"
constexpr ::Animancer::Key_IListItem* Animancer::DontAllowFade::i___Animancer__Key_IListItem() noexcept {
return static_cast<::Animancer::Key_IListItem*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Animancer::DontAllowFade::DontAllowFade()   {
}
