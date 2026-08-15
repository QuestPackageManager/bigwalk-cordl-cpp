#pragma once
// IWYU pragma private; include "MA/Flora/DrawVisibilityMask.hpp"
#include "MA/Flora/zzzz__DrawVisibilityMask_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::MA::Flora::DrawVisibilityMask.get_None
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::DrawVisibilityMask (*)()>(&::MA::Flora::DrawVisibilityMask::get_None)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e2bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawVisibilityMask>(),
                        {"get_None", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawVisibilityMask.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::DrawVisibilityMask (*)(uint8_t, bool, bool, bool)>(&::MA::Flora::DrawVisibilityMask::Create)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1814bd2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawVisibilityMask>(),
                        {"Create", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawVisibilityMask.get_IsEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::DrawVisibilityMask::*)()>(&::MA::Flora::DrawVisibilityMask::get_IsEmpty)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814bd3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawVisibilityMask>(),
                        {"get_IsEmpty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawVisibilityMask.get_IsVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::DrawVisibilityMask::*)()>(&::MA::Flora::DrawVisibilityMask::get_IsVisible)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814bd400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawVisibilityMask>(),
                        {"get_IsVisible", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawVisibilityMask.IsVisibleInSplit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::DrawVisibilityMask::*)(int32_t)>(&::MA::Flora::DrawVisibilityMask::IsVisibleInSplit)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814bd380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawVisibilityMask>(),
                        {"IsVisibleInSplit", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawVisibilityMask.CountSplits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::DrawVisibilityMask::*)()>(&::MA::Flora::DrawVisibilityMask::CountSplits)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814bd250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawVisibilityMask>(),
                        {"CountSplits", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawVisibilityMask.get_SplitMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::MA::Flora::DrawVisibilityMask::*)()>(&::MA::Flora::DrawVisibilityMask::get_SplitMask)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814bd420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawVisibilityMask>(),
                        {"get_SplitMask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawVisibilityMask.set_SplitMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::DrawVisibilityMask::*)(uint8_t)>(&::MA::Flora::DrawVisibilityMask::set_SplitMask)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814bd530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawVisibilityMask>(),
                        {"set_SplitMask", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawVisibilityMask.get_StateMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::MA::Flora::DrawVisibilityMask::*)()>(&::MA::Flora::DrawVisibilityMask::get_StateMask)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814bd440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawVisibilityMask>(),
                        {"get_StateMask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawVisibilityMask.get_HasMotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::DrawVisibilityMask::*)()>(&::MA::Flora::DrawVisibilityMask::get_HasMotion)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814bd3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawVisibilityMask>(),
                        {"get_HasMotion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawVisibilityMask.set_HasMotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::DrawVisibilityMask::*)(bool)>(&::MA::Flora::DrawVisibilityMask::set_HasMotion)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814bd500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawVisibilityMask>(),
                        {"set_HasMotion", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawVisibilityMask.get_HasFadeKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::DrawVisibilityMask::*)()>(&::MA::Flora::DrawVisibilityMask::get_HasFadeKeyword)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181455c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawVisibilityMask>(),
                        {"get_HasFadeKeyword", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawVisibilityMask.set_HasFadeKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::DrawVisibilityMask::*)(bool)>(&::MA::Flora::DrawVisibilityMask::set_HasFadeKeyword)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814bd4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawVisibilityMask>(),
                        {"set_HasFadeKeyword", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawVisibilityMask.get_HasFlippedWinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::DrawVisibilityMask::*)()>(&::MA::Flora::DrawVisibilityMask::get_HasFlippedWinding)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814bd3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawVisibilityMask>(),
                        {"get_HasFlippedWinding", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawVisibilityMask.set_HasFlippedWinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MA::Flora::DrawVisibilityMask::*)(bool)>(&::MA::Flora::DrawVisibilityMask::set_HasFlippedWinding)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1814bd4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawVisibilityMask>(),
                        {"set_HasFlippedWinding", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawVisibilityMask.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::DrawVisibilityMask::*)(::MA::Flora::DrawVisibilityMask)>(&::MA::Flora::DrawVisibilityMask::Equals)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1814bd2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawVisibilityMask>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::DrawVisibilityMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawVisibilityMask.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::DrawVisibilityMask::*)(::System::Object*)>(&::MA::Flora::DrawVisibilityMask::Equals)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1814bd310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::DrawVisibilityMask>(),
                    {::i2c::class_of<::MA::Flora::DrawVisibilityMask>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawVisibilityMask.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::MA::Flora::DrawVisibilityMask::*)()>(&::MA::Flora::DrawVisibilityMask::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x180311f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MA::Flora::DrawVisibilityMask>(),
                    {::i2c::class_of<::MA::Flora::DrawVisibilityMask>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawVisibilityMask.op_BitwiseOr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::DrawVisibilityMask (*)(::MA::Flora::DrawVisibilityMask, ::MA::Flora::DrawVisibilityMask)>(&::MA::Flora::DrawVisibilityMask::op_BitwiseOr)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814bd470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawVisibilityMask>(),
                        {"op_BitwiseOr", {}, {::i2c::type_of<::MA::Flora::DrawVisibilityMask>(), ::i2c::type_of<::MA::Flora::DrawVisibilityMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawVisibilityMask.op_BitwiseAnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::MA::Flora::DrawVisibilityMask (*)(::MA::Flora::DrawVisibilityMask, ::MA::Flora::DrawVisibilityMask)>(&::MA::Flora::DrawVisibilityMask::op_BitwiseAnd)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814bd460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawVisibilityMask>(),
                        {"op_BitwiseAnd", {}, {::i2c::type_of<::MA::Flora::DrawVisibilityMask>(), ::i2c::type_of<::MA::Flora::DrawVisibilityMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawVisibilityMask.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MA::Flora::DrawVisibilityMask, ::MA::Flora::DrawVisibilityMask)>(&::MA::Flora::DrawVisibilityMask::op_Equality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814bd480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawVisibilityMask>(),
                        {"op_Equality", {}, {::i2c::type_of<::MA::Flora::DrawVisibilityMask>(), ::i2c::type_of<::MA::Flora::DrawVisibilityMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MA::Flora::DrawVisibilityMask.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::MA::Flora::DrawVisibilityMask, ::MA::Flora::DrawVisibilityMask)>(&::MA::Flora::DrawVisibilityMask::op_Inequality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1814bd490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawVisibilityMask>(),
                        {"op_Inequality", {}, {::i2c::type_of<::MA::Flora::DrawVisibilityMask>(), ::i2c::type_of<::MA::Flora::DrawVisibilityMask>()}}
                    )));
    return ___internal_method;
  }
};
inline ::MA::Flora::DrawVisibilityMask MA::Flora::DrawVisibilityMask::get_None()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawVisibilityMask>(),
                        {"get_None", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::DrawVisibilityMask>(nullptr, ___internal_method);
}
inline ::MA::Flora::DrawVisibilityMask MA::Flora::DrawVisibilityMask::Create(uint8_t  splitMask, bool  hasFlippedWinding, bool  hasMotion, bool  hasFadeKeyword)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawVisibilityMask>(),
                        {"Create", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::DrawVisibilityMask>(nullptr, ___internal_method, splitMask, hasFlippedWinding, hasMotion, hasFadeKeyword);
}
inline bool MA::Flora::DrawVisibilityMask::get_IsEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawVisibilityMask>(),
                        {"get_IsEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool MA::Flora::DrawVisibilityMask::get_IsVisible()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawVisibilityMask>(),
                        {"get_IsVisible", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool MA::Flora::DrawVisibilityMask::IsVisibleInSplit(int32_t  splitIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawVisibilityMask>(),
                        {"IsVisibleInSplit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, splitIndex);
}
inline int32_t MA::Flora::DrawVisibilityMask::CountSplits()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawVisibilityMask>(),
                        {"CountSplits", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline uint8_t MA::Flora::DrawVisibilityMask::get_SplitMask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawVisibilityMask>(),
                        {"get_SplitMask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method);
}
inline void MA::Flora::DrawVisibilityMask::set_SplitMask(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawVisibilityMask>(),
                        {"set_SplitMask", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint8_t MA::Flora::DrawVisibilityMask::get_StateMask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawVisibilityMask>(),
                        {"get_StateMask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method);
}
inline bool MA::Flora::DrawVisibilityMask::get_HasMotion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawVisibilityMask>(),
                        {"get_HasMotion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void MA::Flora::DrawVisibilityMask::set_HasMotion(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawVisibilityMask>(),
                        {"set_HasMotion", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool MA::Flora::DrawVisibilityMask::get_HasFadeKeyword()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawVisibilityMask>(),
                        {"get_HasFadeKeyword", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void MA::Flora::DrawVisibilityMask::set_HasFadeKeyword(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawVisibilityMask>(),
                        {"set_HasFadeKeyword", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool MA::Flora::DrawVisibilityMask::get_HasFlippedWinding()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawVisibilityMask>(),
                        {"get_HasFlippedWinding", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void MA::Flora::DrawVisibilityMask::set_HasFlippedWinding(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawVisibilityMask>(),
                        {"set_HasFlippedWinding", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool MA::Flora::DrawVisibilityMask::Equals(::MA::Flora::DrawVisibilityMask  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawVisibilityMask>(),
                        {"Equals", {}, {::i2c::type_of<::MA::Flora::DrawVisibilityMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool MA::Flora::DrawVisibilityMask::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::DrawVisibilityMask>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t MA::Flora::DrawVisibilityMask::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MA::Flora::DrawVisibilityMask>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::MA::Flora::DrawVisibilityMask MA::Flora::DrawVisibilityMask::op_BitwiseOr(::MA::Flora::DrawVisibilityMask  a, ::MA::Flora::DrawVisibilityMask  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawVisibilityMask>(),
                        {"op_BitwiseOr", {}, {::i2c::type_of<::MA::Flora::DrawVisibilityMask>(), ::i2c::type_of<::MA::Flora::DrawVisibilityMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::DrawVisibilityMask>(nullptr, ___internal_method, a, b);
}
inline ::MA::Flora::DrawVisibilityMask MA::Flora::DrawVisibilityMask::op_BitwiseAnd(::MA::Flora::DrawVisibilityMask  a, ::MA::Flora::DrawVisibilityMask  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawVisibilityMask>(),
                        {"op_BitwiseAnd", {}, {::i2c::type_of<::MA::Flora::DrawVisibilityMask>(), ::i2c::type_of<::MA::Flora::DrawVisibilityMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::MA::Flora::DrawVisibilityMask>(nullptr, ___internal_method, a, b);
}
inline bool MA::Flora::DrawVisibilityMask::op_Equality(::MA::Flora::DrawVisibilityMask  a, ::MA::Flora::DrawVisibilityMask  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawVisibilityMask>(),
                        {"op_Equality", {}, {::i2c::type_of<::MA::Flora::DrawVisibilityMask>(), ::i2c::type_of<::MA::Flora::DrawVisibilityMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool MA::Flora::DrawVisibilityMask::op_Inequality(::MA::Flora::DrawVisibilityMask  a, ::MA::Flora::DrawVisibilityMask  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::DrawVisibilityMask>(),
                        {"op_Inequality", {}, {::i2c::type_of<::MA::Flora::DrawVisibilityMask>(), ::i2c::type_of<::MA::Flora::DrawVisibilityMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::DrawVisibilityMask>"
constexpr  MA::Flora::DrawVisibilityMask::operator ::System::IEquatable_1<::MA::Flora::DrawVisibilityMask>*()  {
return static_cast<::System::IEquatable_1<::MA::Flora::DrawVisibilityMask>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::MA::Flora::DrawVisibilityMask>"
constexpr ::System::IEquatable_1<::MA::Flora::DrawVisibilityMask>* MA::Flora::DrawVisibilityMask::i___System__IEquatable_1___MA__Flora__DrawVisibilityMask_()  {
return static_cast<::System::IEquatable_1<::MA::Flora::DrawVisibilityMask>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "packed", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::DrawVisibilityMask::DrawVisibilityMask(uint8_t  packed) noexcept  {
this->packed = packed;
}
// Ctor Parameters []
constexpr ::MA::Flora::DrawVisibilityMask::DrawVisibilityMask()   {
}
